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

long entfernung1 = 0;
long zeit1 = 0;
long entfernung2 = 0;
long zeit2 = 0;
long entfernung3 = 0;
long zeit3 = 0;
long entfernung4 = 0;
long zeit4 = 0;
  void sensor{
    digitalWrite(trigger1, LOW);
    digitalWrite(trigger2, LOW);
    digitalWrite(trigger3, LOW);
    digitalWrite(trigger4, LOW);
    delayMicroseconds(3);
    noInterrupts();
    digitalWrite(trigger1, HIGH);
    digitalWrite(trigger2, HIGH);
    digitalWrite(trigger3, HIGH);
    digitalWrite(trigger4, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger1, LOW);
    digitalWrite(trigger2, LOW);
    digitalWrite(trigger3, LOW);
    digitalWrite(trigger4, LOW);
    zeit1 = pulseIn(echo1, HIGH);
    zeit2 = pulseIn(echo2, HIGH);
    zeit3 = pulseIn(echo3, HIGH);
    zeit4 = pulseIn(echo4, HIGH);
    interrupts();

    zeit1 = (zeit1 / 2);
    entfernung1 = zeit1 / 29.1;
    zeit2 = (zeit2 / 2);
    entfernung2 = zeit2 / 29.1;
    zeit3 = (zeit3 / 2);
    entfernung3 = zeit3 / 29.1;
    zeit4 = (zeit4 / 2);
    entfernung4 = zeit4 / 29.1;

    Serial.println("Sensor 1: " + entfernung1)
    Serial.println("=========================")
    Serial.println("Sensor 2: " + entfernung2)
    Serial.println("=========================")
    Serial.println("Sensor 3: " + entfernung3)
    Serial.println("=========================")
    Serial.println("Sensor 4: " + entfernung4)


  }


#endif
