from functions import Sock, Iridium, Arduino, test_ports

def begin_reading(soc, irid, ard):
    '''Continuously read from the arduino and send over socket and Iridium'''
    while True:
        vals = ' '.join(str(x) for x in ard.serial_read())
        soc.send_message(vals)
        irid.send_message(vals)


def main():
    '''Initializes classes and sets ports'''
    soc = Sock()
    irid = Iridium()
    ard = Arduino()

    soc.begin_listening()
    ports = test_ports()
    irid.set_port(ports)
    ard.set_port(ports)

    begin_reading(soc, irid, ard)

main()
