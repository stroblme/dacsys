# coding=utf-8

import time
import RPi.GPIO as GPIO

# Pin-Nummern wie auf dem Raspberry Board verwenden
GPIO.setmode(GPIO.BOARD)

# Pin 15 (GPIO 22) als Output
GPIO.setup(15, GPIO.OUT)

GPIO.output(15, True)
