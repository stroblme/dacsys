EESchema Schematic File Version 2
LIBS:dacsys-rescue
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:dacsys-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 7
Title "DACSYS"
Date ""
Rev "1.0"
Comp "Melvin Strobl"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L raspberry_pi_zero U3
U 1 1 5A197E1E
P 4600 3750
F 0 "U3" H 4300 4850 50  0000 C CNN
F 1 "raspberry_pi_zero" H 5300 2550 50  0000 C CNN
F 2 "" H 4250 2750 50  0000 C CNN
F 3 "" H 4250 2750 50  0000 C CNN
	1    4600 3750
	1    0    0    -1  
$EndComp
Entry Wire Line
	4550 1900 4650 2000
Entry Wire Line
	4650 1900 4750 2000
Text HLabel 4450 1550 1    60   BiDi ~ 0
bus_usb
Entry Wire Line
	3300 2850 3400 2950
Entry Wire Line
	3300 2950 3400 3050
Text HLabel 2950 2850 0    60   BiDi ~ 0
bus_i2c
Entry Wire Line
	5800 3350 5900 3450
Entry Wire Line
	5800 4750 5900 4850
Entry Wire Line
	3300 4450 3400 4550
Text HLabel 6300 4850 2    60   BiDi ~ 0
bus_i2s
Text HLabel 2950 4450 0    60   BiDi ~ 0
bus_i2s
Wire Wire Line
	4650 2000 4650 2550
Wire Wire Line
	4750 2000 4750 2550
Wire Bus Line
	4450 1900 4450 1550
Wire Bus Line
	3300 2950 3300 2850
Wire Bus Line
	3300 2850 2950 2850
Wire Wire Line
	3400 2950 4000 2950
Wire Wire Line
	3400 3050 4000 3050
Wire Wire Line
	3400 4550 4000 4550
Wire Wire Line
	5200 3350 5800 3350
Wire Wire Line
	5200 4750 5800 4750
Wire Bus Line
	5900 4850 6300 4850
Wire Bus Line
	3300 4450 2950 4450
Wire Wire Line
	4000 3250 3900 3250
Wire Wire Line
	3900 3250 3900 5750
Wire Wire Line
	4000 4050 3900 4050
Connection ~ 3900 4050
Wire Wire Line
	4000 4750 3900 4750
Connection ~ 3900 4750
Wire Wire Line
	5200 3450 5300 3450
Connection ~ 5300 3450
Wire Wire Line
	5200 3750 5300 3750
Connection ~ 5300 3750
Wire Wire Line
	5200 4250 5300 4250
Connection ~ 5300 4250
Wire Wire Line
	5200 4450 5300 4450
Connection ~ 5300 4450
Wire Wire Line
	5200 3050 5300 3050
Wire Wire Line
	5300 3050 5300 5750
Wire Wire Line
	4450 5050 4450 5750
Wire Wire Line
	4150 5200 4150 5300
Wire Wire Line
	4150 5250 4350 5250
Wire Wire Line
	4350 5250 4350 5050
$Comp
L C C16
U 1 1 5A1B1EE3
P 4150 5450
F 0 "C16" H 4175 5550 50  0000 L CNN
F 1 "0.1µ" H 4175 5350 50  0000 L CNN
F 2 "" H 4188 5300 50  0000 C CNN
F 3 "" H 4150 5450 50  0000 C CNN
	1    4150 5450
	1    0    0    -1  
$EndComp
Wire Wire Line
	4150 5600 4150 5750
Connection ~ 4150 5250
Entry Wire Line
	4550 5600 4650 5700
Wire Wire Line
	4550 5050 4550 5600
Wire Bus Line
	4650 5700 4650 6000
Text HLabel 4650 6000 3    60   Input ~ 0
bus_ctrl
Wire Bus Line
	5900 3450 5900 4850
Text Label 5550 3350 0    60   ~ 0
BCK
Text Label 5550 4750 0    60   ~ 0
DOUT
Text Label 3450 4550 0    60   ~ 0
LRCK
Text Label 4550 5550 1    60   ~ 0
PWR_en
Text Label 3450 2950 0    60   ~ 0
SDA
Text Label 3450 3050 0    60   ~ 0
SCL
Text Label 4650 2400 1    60   ~ 0
D+
Text Label 4750 2400 1    60   ~ 0
D-
Entry Wire Line
	4450 1900 4550 2000
Wire Wire Line
	4550 2000 4550 2550
Text Label 4550 2400 1    60   ~ 0
VCC_USB
$Comp
L +5V #PWR021
U 1 1 5A1C852E
P 4150 5200
F 0 "#PWR021" H 4150 5050 50  0001 C CNN
F 1 "+5V" H 4150 5340 50  0000 C CNN
F 2 "" H 4150 5200 50  0000 C CNN
F 3 "" H 4150 5200 50  0000 C CNN
	1    4150 5200
	1    0    0    -1  
$EndComp
Wire Bus Line
	4450 1900 4650 1900
$Comp
L GNDD #PWR022
U 1 1 5A24814A
P 5150 2400
F 0 "#PWR022" H 5150 2150 50  0001 C CNN
F 1 "GNDD" H 5150 2250 50  0000 C CNN
F 2 "" H 5150 2400 50  0000 C CNN
F 3 "" H 5150 2400 50  0000 C CNN
	1    5150 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 2550 4850 2350
Wire Wire Line
	4850 2350 5150 2350
Wire Wire Line
	5150 2350 5150 2400
$Comp
L GNDD #PWR023
U 1 1 5A248270
P 5300 5750
F 0 "#PWR023" H 5300 5500 50  0001 C CNN
F 1 "GNDD" H 5300 5600 50  0000 C CNN
F 2 "" H 5300 5750 50  0000 C CNN
F 3 "" H 5300 5750 50  0000 C CNN
	1    5300 5750
	1    0    0    -1  
$EndComp
$Comp
L GNDD #PWR024
U 1 1 5A248288
P 4450 5750
F 0 "#PWR024" H 4450 5500 50  0001 C CNN
F 1 "GNDD" H 4450 5600 50  0000 C CNN
F 2 "" H 4450 5750 50  0000 C CNN
F 3 "" H 4450 5750 50  0000 C CNN
	1    4450 5750
	1    0    0    -1  
$EndComp
$Comp
L GNDD #PWR025
U 1 1 5A248299
P 4150 5750
F 0 "#PWR025" H 4150 5500 50  0001 C CNN
F 1 "GNDD" H 4150 5600 50  0000 C CNN
F 2 "" H 4150 5750 50  0000 C CNN
F 3 "" H 4150 5750 50  0000 C CNN
	1    4150 5750
	1    0    0    -1  
$EndComp
$Comp
L GNDD #PWR026
U 1 1 5A2482AA
P 3900 5750
F 0 "#PWR026" H 3900 5500 50  0001 C CNN
F 1 "GNDD" H 3900 5600 50  0000 C CNN
F 2 "" H 3900 5750 50  0000 C CNN
F 3 "" H 3900 5750 50  0000 C CNN
	1    3900 5750
	1    0    0    -1  
$EndComp
Text Notes 6450 2750 0    60   ~ 0
Note: RPI_Z_W should be mounted in a position\nwhere the SNR of the antennas is not\ninfluenced by metal parts of e.g chassis\nor other modules circuit copper layers
$EndSCHEMATC
