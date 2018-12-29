import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# replace localhost with some other ip
sock.connect(('localhost', 8000))
while 1:
    data = sock.recv(1024)
    if data > 0:
        print(str(data))
