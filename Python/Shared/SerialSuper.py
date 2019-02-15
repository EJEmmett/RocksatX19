import serial

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

def test_ports():
    '''Test all Serial ports to match ports to devices'''
    # Fill with serial numbers of devices
    serials = list()
    port_list = serial.tools.list_ports.comports()
    return [(port.device, port.serial_number) \
        for port in port_list if port.serial_number in serials]
