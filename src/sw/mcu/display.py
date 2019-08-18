import time
import threading

from luma.core.interface.serial import i2c, spi
from luma.core.render import canvas
from luma.oled.device import ssd1306, ssd1325, ssd1331, sh1106

class display:
	I2CADDRESS = 0x3C
	I2CPORT = 1
	thre
	def __init__():
		# rev.1 users set port=0
		# substitute spi(device=0, port=0) below if using that interface
		serial = i2c(port=I2CPORT, address=I2CADDRESS)

		# substitute ssd1331(...) or sh1106(...) below if using that device
		device = ssd1306(serial)
		
		t_greating = threading.Thread(target=showText(30,40,"DACSYS"))
		t_greating.start()
		
		

	def showText(xpos, ypos, text):
		with canvas(device) as draw:
			draw.text((xpos, ypos), text, fill="white")

	
time.sleep(10)
