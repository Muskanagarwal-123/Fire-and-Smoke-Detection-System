# Fire-and-Smoke-Detection-System

Fire is a problem that can happen at any time. 
Delay in coping with house ﬁres can inducein loss of human life or material. 
If the ﬁre is not held severely, incidents like house ﬁres can occurand create more signiﬁcant losses, especially with the increasing number of residents’ settlements inthe formation of huddled houses, which will be more challenging to handle in case of a ﬁre.

This system will detect smoke and fire within the range of 50-100cm, and will alert through the Light of LEDs and sound of Buzzer.
Components required-
●	Arduino Uno
●	Buzzer
●	LED Screen
●	2 LED’s
●	Flame sensor 
●	Smoke sensor

The whole system is controlled by a firmware which is implemented in
an embedded IC which was built by a compiler (Arduino). Then the
program is downloaded to the 8-bit Atmega328P microcontroller.
The project consists of Flame sensor, Smoke sensor, Arduino UNO as its primary components.
The fire can be detected by the flame sensor which gives a digital output
that corresponds to the Fire status and is received by the Arduino UNO.
Arduino compares the signal and triggers the SIM800L in case of fire
incidents. Through AT commands, SIM800L communicates with
thingspeak server.
