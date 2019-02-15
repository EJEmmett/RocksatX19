from time import sleep
import serial
import serial.tools.list_ports

class SerialDevice(object):
    '''Superclass to keep from cluttering subclasses'''
    def __init__(self, dev_id, baud):
        self.ser_id = dev_id
        self.ser = serial.Serial(baudrate=baud)

    def set_port(self, ports):
        '''Iterates through available ports and matches serial numbers to devices'''
        for port in ports:
            if port[1] == self.ser_id:
                self.ser.port = port[0]


class Iridium(SerialDevice):
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
        sleep(2)
        self.ser.write("AT+SBDD0\r".encode())

    def send_message(self, message):
        '''Sends the message to the Iridium modem'''
        self.ser.write(("AT+SBDWT=" + message + "\r").encode())
        self.commit_message()


class Arduino(SerialDevice):
    def __init__(self):
        '''Initializes a SerialDevice Subclass for the Arduino
           Serial num: 321
           Baudrate: 9600
         '''
        super().__init__(321, 9600)

    def serial_read(self):
        '''Reads from the arduino until it hits a newline char'''
        return self.ser.readline().split()


def test_ports():
    '''Test all Serial ports to match ports to devices'''
    # Fill with serial numbers of devices
    serials = list()
    port_list = serial.tools.list_ports.comports()
    return [(port.device, port.serial_number) for port in port_list if port.serial_number in serials]
