import time
import smbus

# system specific constants
BUS_DEV		= 1

# intitialize BUS_DEV specifig constants
PRESCALER	= 0x02
DAC			= 0x08
OFFSET		= 0x0E
ADDR		= 0x0D
RANGE		= 0x37
WRITEEE		= 0x3F

# default parameters for frequency
v_prescaler	= 0x820 0		#Enabled Bits: JS4, JS2, JS1, JS0, P0 
v_dac		= 0x2940
v_offset	= 0x16
v_address	= 0x58
v_writeee	= 0x0

# initialize bus module
try:
	bus = smbus.SMBus(BUS_DEV)
except:
	print("Failure during I2C Bus initialization")

# write value at address
def write_b(dataAddress, value):
	try:
		bus.write_byte_data(v_address, dataAddress, value)
		return 0
	except:
		print("Error writing data to BUS_DEV")
		return 0

def write_w(dataAddress, value):
	try:
		bus.write_word_data(v_address, dataAddress, value)
		return 0
	except:
		print("Error writing data to BUS_DEV")
		return -1

def read_b(dataAddress):
	try:
		return bus.read_byte_data(v_address, dataAddress)
	except:
		print("Error writing data to BUS_DEV")
		return -1

print("Begin setting up clock BUS_DEV")

def dynamicSetup():
	print("Writing prescaler value")
	write_w(PRESCALER, v_prescaler)

	print ("Reading RANGE register")
	print str(read_b(RANGE)) #145
	
	print("Writing offset value")
	write_b(OFFSET, v_offset)

	print("Writing dac value")
	write_w(DAC, v_dac)

	print("Finished succesfully")

dynamicSetup()