from functions import Sock, Iridium, Arduino, test_ports
import Net

def begin_reading(soc, irid, ard, sock):
    '''Continuously read from the arduino and send over socket and Iridium'''
    while True:
        vals = ' '.join(str(x) for x in ard.serial_read())
        irid.send_message(vals)
        # Continuously attempts to send UDP message
        while True:
            fail = sock.send_message(vals)
            if not fail:
                break;




def main():
    '''Initializes classes and sets ports'''
    irid = Iridium()
    ard = Arduino()
    sock = Net.Net(127.0.0.1, 8000) # Opens a UDP connection

    ports = test_ports()
    irid.set_port(ports)
    ard.set_port(ports)

    begin_reading(irid, ard, sock)

main()
