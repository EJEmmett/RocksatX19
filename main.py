from functions import Iridium, Arduino, test_ports


def main():
    irid = Iridium()
    ard = Arduino()

    ports = test_ports()
    irid.set_port(ports)
    ard.set_port(ports)

    while True:
        vals = ard.serial_read()
        irid.send_message(str(vals[0]) + str(vals[1]))

main()
