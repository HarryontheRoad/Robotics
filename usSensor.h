#ifndef usSensor_h
#define usSensor_h
#include "variabeln.h"

void SensorSetup() {
pinMode(trigger1, OUTPUT);
pinMode(echo1, INPUT);
pinMode(trigger2, OUTPUT);
pinMode(echo2, INPUT);
pinMode(trigger3, OUTPUT);
pinMode(echo3, INPUT);
pinMode(trigger4, OUTPUT);
pinMode(echo4, INPUT);
Serial.begin(9600);
}
void sensorUS1() {
long entfernung1 = 0;
long zeit1 = 0;
//Mess-Sequenz start
digitalWrite(trigger1, LOW); // Trigger ausschalten
delayMicroseconds(3); // kurz warten
noInterrupts(); // Störungsfreien Betrieb der Messung sicherstellen
digitalWrite(trigger1, HIGH); // Trigger Impuls 40 Kilohertz AN ...
delayMicroseconds(10);// ... für 10 Mikrosekunden
digitalWrite(trigger1, LOW); // Trigger wieder ausschalten
zeit1 = pulseIn(echo1, HIGH); // Nun wird die Echo-Zeit gemessen.**
interrupts(); // Jetzt darf wieder "gestört" werden
//////////////////////////// // Mess-Sequenz Ende, nun erfolgt Umrechnung
zeit1 = (zeit1 / 2); // Zeit halbieren, weil Schall hin- und zurückläuft
entfernung1 = zeit1 / 29.1; // Umrechnung Zeit in Zentimeter (v = 343 m/s)
Serial.println("1: " + entfernung1);
}
void sensorUS2() {
long entfernung2 = 0;
long zeit2 = 0;
//Mess-Sequenz start
digitalWrite(trigger2, LOW); // Trigger ausschalten
delayMicroseconds(3); // kurz warten
noInterrupts(); // Störungsfreien Betrieb der Messung sicherstellen
digitalWrite(trigger2, HIGH); // Trigger Impuls 40 Kilohertz AN ...
delayMicroseconds(10);// ... für 10 Mikrosekunden
digitalWrite(trigger2, LOW); // Trigger wieder ausschalten
zeit2 = pulseIn(echo2, HIGH); // Nun wird die Echo-Zeit gemessen.**
interrupts(); // Jetzt darf wieder "gestört" werden
//////////////////////////// // Mess-Sequenz Ende, nun erfolgt Umrechnung
zeit2 = (zeit2 / 2); // Zeit halbieren, weil Schall hin- und zurückläuft
entfernung2 = zeit2 / 29.1; // Umrechnung Zeit in Zentimeter (v = 343 m/s)
Serial.println("US Sensor1: " + entfernung2);
}
void sensorUS3() {
long entfernung3 = 0;
long zeit3 = 0;
//Mess-Sequenz start
digitalWrite(trigger3, LOW); // Trigger ausschalten
delayMicroseconds(3); // kurz warten
noInterrupts(); // Störungsfreien Betrieb der Messung sicherstellen
digitalWrite(trigger3, HIGH); // Trigger Impuls 40 Kilohertz AN ...
delayMicroseconds(10);// ... für 10 Mikrosekunden
digitalWrite(trigger3, LOW); // Trigger wieder ausschalten
zeit3 = pulseIn(echo3, HIGH); // Nun wird die Echo-Zeit gemessen.**
interrupts(); // Jetzt darf wieder "gestört" werden
//////////////////////////// // Mess-Sequenz Ende, nun erfolgt Umrechnung
zeit3 = (zeit3 / 2); // Zeit halbieren, weil Schall hin- und zurückläuft
entfernung3 = zeit3 / 29.1; // Umrechnung Zeit in Zentimeter (v = 343 m/s)
Serial.println("US Sensor3: " + entfernung3);
}
void sensorUS4() {
long entfernung4 = 0;
long zeit4 = 0;
//Mess-Sequenz start
digitalWrite(trigger4, LOW); // Trigger ausschalten
delayMicroseconds(3); // kurz warten
noInterrupts(); // Störungsfreien Betrieb der Messung sicherstellen
digitalWrite(trigger4, HIGH); // Trigger Impuls 40 Kilohertz AN ...
delayMicroseconds(10);// ... für 10 Mikrosekunden
digitalWrite(trigger4, LOW); // Trigger wieder ausschalten
zeit4 = pulseIn(echo4, HIGH); // Nun wird die Echo-Zeit gemessen.**
interrupts(); // Jetzt darf wieder "gestört" werden
//////////////////////////// // Mess-Sequenz Ende, nun erfolgt Umrechnung
zeit4 = (zeit4 / 2); // Zeit halbieren, weil Schall hin- und zurückläuft
entfernung4 = zeit4 / 29.1; // Umrechnung Zeit in Zentimeter (v = 343 m/s)
Serial.println("US Sensor4: " + entfernung4);
}



#endif
