import serial
portName = '/dev/cu.usbmodem143301'

ser = serial.Serial(portName, 9600)

while True:
	print(ser.readline())

# f = open('log.csv', 'a')

# while True:
#   f.write(ser.readline())
#   f.close()
#   f = open('log.csv', 'a')


