EESchema Schematic File Version 4
LIBS:splitter-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L conn:Conn_01x07 J?
U 1 1 5B5B6FAD
P 1150 1700
F 0 "J?" H 1150 2100 50  0000 C CNN
F 1 "Conn_01x07" H 1150 1300 50  0000 C CNN
F 2 "" H 1150 1700 50  0001 C CNN
F 3 "" H 1150 1700 50  0001 C CNN
	1    1150 1700
	-1   0    0    1   
$EndComp
$Comp
L splitter-rescue:POT_Dual RV?
U 1 1 5B5B71A3
P 3600 1500
F 0 "RV?" H 3600 1650 50  0000 C CNN
F 1 "POT_Dual" H 3600 1575 50  0000 C CNN
F 2 "" H 3850 1425 50  0001 C CNN
F 3 "" H 3850 1425 50  0001 C CNN
	1    3600 1500
	1    0    0    -1  
$EndComp
$Comp
L splitter-rescue:POT_Dual RV?
U 1 1 5B5B71E2
P 3600 2150
F 0 "RV?" H 3600 2300 50  0000 C CNN
F 1 "POT_Dual" H 3600 2225 50  0000 C CNN
F 2 "" H 3850 2075 50  0001 C CNN
F 3 "" H 3850 2075 50  0001 C CNN
	1    3600 2150
	1    0    0    -1  
$EndComp
$Comp
L splitter-rescue:POT_Dual RV?
U 1 1 5B5B720F
P 3600 2800
F 0 "RV?" H 3600 2950 50  0000 C CNN
F 1 "POT_Dual" H 3600 2875 50  0000 C CNN
F 2 "" H 3850 2725 50  0001 C CNN
F 3 "" H 3850 2725 50  0001 C CNN
	1    3600 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	3500 1600 3550 1600
Wire Wire Line
	3550 1600 3550 2250
Wire Wire Line
	3550 2900 3500 2900
Wire Wire Line
	3500 2250 3550 2250
Connection ~ 3550 2250
Wire Wire Line
	4000 1600 4050 1600
Wire Wire Line
	4050 1600 4050 2250
Wire Wire Line
	4050 2900 4000 2900
Wire Wire Line
	4000 2250 4050 2250
Connection ~ 4050 2250
Wire Wire Line
	3550 2250 3550 2900
Wire Wire Line
	4050 2250 4050 2900
$EndSCHEMATC
