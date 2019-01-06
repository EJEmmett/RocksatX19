from time import sleep
import serial
import serial.tools.list_ports


class SerialBase(object):
    def __init__(self, dev_id, baud):
        self.ser_id = dev_id
        self.ser = serial.Serial(baudrate = baud)

    def set_port(self, ports):
        for port in ports:
            if port[1] == self.ser_id:
                self.ser.port = port[0]


class Iridium(SerialBase):
    def __init__(self):
        super().__init__(123, 19200)

    def commit_message(self):
        sleep(1)
        self.ser.write("AT+SBDIX\r".encode())
        sleep(2)
        self.ser.write("AT+SBDD0\r".encode())

    def send_message(self, message):
        self.ser.write(("AT+SBDWT=" + str(message) + "\r").encode())
        self.commit_message()


class Arduino(SerialBase):
    def __init__(self):
        super().__init__(321, 9600)

    def serial_read(self):
        vals = self.ser.readline()
        return vals.split()


def test_ports():
    # Fill with serial numbers of devices
    serials = list()
    ports = list()
    for port in serial.tools.list_ports.comports():
        if "USB" in port.device and port.serial_number in serials:
            ports.append(port.device, port.serial_number)
    return ports
