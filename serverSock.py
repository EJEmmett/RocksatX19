import socket
#from threading import *

HOST = '10.1.121.102'
PORT = 65432

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, PORT))
        s.listen()
        conn, addr = s.accept()
        with conn:
                print('connected by', addr)
                while True:
                        data = conn.recv(100000024)
                        print(data)
                        if not data:
                                break
                        conn.sendall(data)
