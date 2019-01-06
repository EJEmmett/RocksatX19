import socket
from time import time
import struct
#filedata = "file_socket.txt"
#with open(filedata, "rb") as f:
#    print(f, "\n")
time = int(time())
time_bytes = struct.pack(">i", time)
len(time_bytes)
HOST = '10.1.121.102'
PORT = 65432
i = 0

while(i < 4):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((HOST, PORT))
        s.sendall(time_bytes)
        data = s.recv(1024)

print('got data', repr(data))

