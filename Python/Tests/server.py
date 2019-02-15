from Shared import Net
def main():
    sock = Net("127.0.0.1", 8000) # Opens a UDP connection
    sock.start_server()
    try:
        while True:
            print(sock.read_message())
    except KeyboardInterrupt:
        return

main()
