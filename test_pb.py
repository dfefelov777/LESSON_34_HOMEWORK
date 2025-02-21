import pb

data = [
    {"id": "123", "type": "android", "apps": [1, 2, 3], "lat": 55.75, "lon": 37.61},
    {"id": "456", "type": "ios", "apps": [4, 5, 6], "lat": 55.76, "lon": 37.62},
]

# Запись данных
bytes_written = pb.xwrite_pb(data, "output.pb")
print(f"Bytes written: {bytes_written}")

# Чтение данных
read_data = pb.xread_pb("output.pb")
print(f"Read data: {read_data}")
