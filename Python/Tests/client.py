from Shared import Net

def main():
    sock = Net("127.0.0.1", 8000) # Opens a UDP connection
    while True:
        i = input("Enter: ")
        sock.send_message(i)

main()
