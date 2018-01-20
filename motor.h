#ifndef Motor_h
#define Motor_h
#include "variabeln.h"

void setupMotor(){
 
  pinMode(Enable_A, OUTPUT); 
  pinMode(Enable_B, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  //Set the state
  digitalWrite(Enable_A, HIGH);      
  digitalWrite(Enable_B, HIGH);       
  digitalWrite(IN1, LOW);    
  digitalWrite(IN2, LOW);    
  digitalWrite(IN3, LOW);    
  digitalWrite(IN4, LOW);    

  }

void Motor(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);   
  digitalWrite(IN4, HIGH);    
}
#endif
