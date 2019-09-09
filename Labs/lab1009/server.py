import socket
import time

listensocket = socket.socket()

port = 11111
maxConnections = 999
IP = socket.gethostname()

listensocket.listen(maxConnections)
print("server started at " + IP + " on port" + str(port))

(clientsocket, address) = listensocket.accept()
print("new connection made")

running = True

message = clientsocket.recv(1024).decode()
print(message)