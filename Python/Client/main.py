from Shared import SerialSuper, Net

class Arduino(SerialSuper.SerialDevice):
    def __init__(self):
        '''Initializes a SerialDevice Subclass for the Arduino
           Serial num: 321
           Baudrate: 9600
         '''
        super().__init__(321, 9600)

    def serial_read(self):
        '''Reads from the arduino until it hits a newline char'''
        return self.ser.readline().split()


def begin_reading(ard, sock):
    '''Continuously read from the arduino and send over socket'''
    while True:
        vals = ' '.join(str(x) for x in ard.serial_read())
        # Continuously attempts to send UDP message
        while True:
            fail = sock.send_message(vals)
            if not fail:
                break;


def main():
    '''Initializes classes and sets ports'''
    ard = Arduino()
    sock = Net.Net(127.0.0.1, 8000) # Opens a UDP connection

    ports = SerialSuper.test_ports()
    ard.set_port(ports)

    begin_reading(ard, sock)

main()
