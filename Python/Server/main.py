from time import sleep
from Shared import SerialSuper, Net

class Iridium(SerialSuper.SerialDevice):
    '''Initializes a SerialDevice Subclass for the Iridium
       Serial num: 123
       Baudrate: 19200
    '''
    def __init__(self):
        super().__init__(123, 19200)

    def commit_message(self):
        '''Writes the commands to transmit the message and then clear the buffer'''
        sleep(1)
        self.ser.write("AT+SBDIX\r".encode())
        sleep(1)
        self.ser.write("AT+SBDD0\r".encode())

    def send_message(self, message):
        '''Sends the message to the Iridium modem'''
        self.ser.write(("AT+SBDWT=" + message + "\r").encode())
        self.commit_message()

def begin_reading(irid, sock):
    '''Continuously read from the UDP Server and send over Iridium'''
    while True:
        irid.send_message(sock.read_message())
        irid.commit_message()


def main():
    '''Initializes classes and sets ports'''
    irid = Iridium()
    sock = Net.Net(127.0.0.1, 8000) # Opens a UDP connection
    sock.start_server()

    ports = SerialSuper.test_ports()
    irid.set_port(ports)

    begin_reading(irid, sock)

main()
