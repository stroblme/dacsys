import time
import smbus

# system specific constants
BUS_DEV		= 0

# intitialize BUS_DEV specifig constants
PRESCALER	= 0x02
DAC			= 0x08
OFFSET		= 0x0E
ADDR		= 0x0D
RANGE		= 0x37
WRITEEE		= 0x3F

# default parameters for frequency
v_prescaler	= 0xB840		#Enabled Bits: JS4, JS2, JS1, JS0, P0
v_dac		= 0xA1C0
v_offset	= 0x07
v_address	= 0x58
v_writeee	= 0x0

# initialize bus module
try:
	bus = smbus.SMBus(BUS_DEV)
except:
	print("Failure during I2C Bus initialization")

# write value at address
def write_b(address, value):
	try:
		bus.write_byte_data(BUS_DEV, address, value)
		return 0
	except:
		print("Error writing data to BUS_DEV")
		return 0

def write_w(address, value):
	try:
		bus.write_word_data(BUS_DEV, address, value)
		return 0
	except:
		print("Error writing data to BUS_DEV")
		return -1


print("Begin setting up clock BUS_DEV")

def dynamicSetup():
	print("Writing prescaler value")
	write_w(PRESCALER, v_prescaler)

	print("Writing offset value")
	write_w(OFFSET, v_offset)

	print("Writing dac value")
	write_w(DAC, v_dac)

	print("Finished succesfully")

dynamicSetup()