import Adafruit_BBIO.GPIO as GPIO
from time import sleep

outPin = "P9_12"
delay = 0.5
count = 4

GPIO.setup(outPin, GPIO.OUT)

for i in range(0, count):
	print "HIGH"
	GPIO.output(outPin, GPIO.HIGH)
	sleep(delay)

	print "LOW"
	GPIO.output(outPin, GPIO.LOW)
	sleep(delay)

GPIO.cleanup()
