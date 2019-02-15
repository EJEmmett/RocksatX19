import socket

class Net(object):
    '''UDP Shared Class'''
    def __init__(self, ip, port):
        self.ip_addr = ip
        self.port_num = port
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    def start_server(self):
        '''UDP Server Binder'''
        self.sock.bind((self.ip_addr, self.port_num))

    def send_message(self, message):
        '''UDP Client Message Sender'''
        self.sock.sendto(message.encode(), (self.ip_addr, self.port_num))

    def read_message(self):
        '''UDP Server Message Reader'''
        return self.sock.recvfrom(1024)[0]
