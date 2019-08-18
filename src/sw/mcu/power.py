import time
import RPi.GPIO as GPIO


class power:
	ENPIN = 13

	def __init__():
		GPIO.setmode(GPIO.BOARD)

		GPIO.setup(ENPIN, GPIO.OUT)

	def enable():
		GPIO.output(ENPIN, True)

	def disable():
		GPIO.output(ENPIN, False)
	
	def __destroy__():
		GPIO.clear