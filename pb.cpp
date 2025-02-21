#include <fstream>
#include <iostream>
#include <vector>
#include "deviceapps.pb.h"
#include <Python.h>

#define MAGIC 0xFFFFFFFF
#define DEVICE_APPS_TYPE 1

typedef struct pbheader_s {
    uint32_t magic;
    uint16_t type;
    uint16_t length;
} pbheader_t;

#define PBHEADER_INIT {MAGIC, DEVICE_APPS_TYPE, 0}

static PyObject* py_deviceapps_xwrite_pb(PyObject* self, PyObject* args) {
    const char* path;
    PyObject* iterable;

    if (!PyArg_ParseTuple(args, "Os", &iterable, &path))
        return NULL;

    std::ofstream file(path, std::ios::binary);
    if (!file.is_open()) {
        PyErr_SetString(PyExc_IOError, "Unable to open file for writing");
        return NULL;
    }

    PyObject* item;
    Py_ssize_t pos = 0;

    while (PyDict_Next(iterable, &pos, NULL, &item)) {
        DeviceApps msg;
        DeviceApps_Device* device = msg.mutable_device();

        PyObject* id = PyDict_GetItemString(item, "id");
        PyObject* type = PyDict_GetItemString(item, "type");
        PyObject* apps = PyDict_GetItemString(item, "apps");
        PyObject* lat = PyDict_GetItemString(item, "lat");
        PyObject* lon = PyDict_GetItemString(item, "lon");

        if (id && type && apps && lat && lon) {
            device->set_id(PyUnicode_AsUTF8(id));
            device->set_type(PyUnicode_AsUTF8(type));

            msg.set_lat(PyFloat_AsDouble(lat));
            msg.set_lon(PyFloat_AsDouble(lon));

            for (Py_ssize_t i = 0; i < PyList_Size(apps); i++) {
                msg.add_apps(PyLong_AsUnsignedLong(PyList_GetItem(apps, i)));
            }

            std::string serialized_data;
            msg.SerializeToString(&serialized_data);

            pbheader_t header = PBHEADER_INIT;
            header.length = serialized_data.size();

            file.write(reinterpret_cast<const char*>(&header), sizeof(header));
            file.write(serialized_data.data(), serialized_data.size());
        }
    }

    file.close();
    return PyLong_FromSize_t(file.tellp());
}

static PyObject* py_deviceapps_xread_pb(PyObject* self, PyObject* args) {
    const char* path;

    if (!PyArg_ParseTuple(args, "s", &path))
        return NULL;

    std::ifstream file(path, std::ios::binary);
    if (!file.is_open()) {
        PyErr_SetString(PyExc_IOError, "Unable to open file for reading");
        return NULL;
    }

    PyObject* result = PyList_New(0);
    pbheader_t header;

    while (file.read(reinterpret_cast<char*>(&header), sizeof(header))) {
        if (header.magic != MAGIC || header.type != DEVICE_APPS_TYPE) {
            continue;
        }

        std::vector<char> buffer(header.length);
        file.read(buffer.data(), header.length);

        DeviceApps msg;
        if (msg.ParseFromArray(buffer.data(), header.length)) {
            PyObject* dict = PyDict_New();

            const DeviceApps_Device& device = msg.device();
            PyDict_SetItemString(dict, "id", PyUnicode_FromString(device.id().c_str()));
            PyDict_SetItemString(dict, "type", PyUnicode_FromString(device.type().c_str()));

            PyObject* apps_list = PyList_New(msg.apps_size());
            for (int i = 0; i < msg.apps_size(); ++i) {
                PyList_SetItem(apps_list, i, PyLong_FromUnsignedLong(msg.apps(i)));
            }
            PyDict_SetItemString(dict, "apps", apps_list);

            PyDict_SetItemString(dict, "lat", PyFloat_FromDouble(msg.lat()));
            PyDict_SetItemString(dict, "lon", PyFloat_FromDouble(msg.lon()));

            PyList_Append(result, dict);
            Py_DECREF(dict);
        }
    }

    file.close();
    return result;
}