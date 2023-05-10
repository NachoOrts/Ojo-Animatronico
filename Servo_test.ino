//Error free code
#include <Servo.h>
#define pin_botonH 2
#define pin_botonV 4
#define pin_botonP 6
#define pin_servoH 9
#define pin_servoV 11
#define pin_servoP 5

int angle;
int botonH;
int botonV;
int botonP;

Servo servoH;
Servo servoV;
Servo servoP;



void setup() {
// Servo Horizonatal
servoH.attach(pin_servoH);
servoH.write(angle);
pinMode(pin_botonH, INPUT);

// Servo Vertical
servoV.attach(pin_servoV);
servoV.write(angle);
pinMode(pin_botonV, INPUT);
  
// Servo Parpadeo
servoP.attach(pin_servoP);
servoP.write(angle);
pinMode(pin_botonP, INPUT);

Serial.begin(9600);

delay(15);

}

void loop() {
// put your main code here, to run repeatedly:

/*
Serial.print(botonV);
Serial.print("\t");
*/
  
// Primer task: Movimiento horizontal
botonH = digitalRead(pin_botonH);
if (botonH){
    for(angle=0 ; angle<=40 ; angle+=1){
    servoH.write(angle);
    delay(15);
    }
    for(angle=40 ; angle>=0 ; angle-=1){
    servoH.write(angle);
    delay(15);
  }
  }

  
// Segundo task: Movimiento vertical
botonV = digitalRead(pin_botonV);
if (botonV){
    for(angle=0 ; angle<=60 ; angle+=1){
    servoV.write(angle);
    delay(15);
    }
    for(angle=60 ; angle>=0 ; angle-=1){
    servoV.write(angle);
    delay(15);
  }
  }

 
// Tercer task: Parpadeo
botonP = digitalRead(pin_botonP);
if (botonP){
    for(angle=0 ; angle<=35 ; angle+=1){
    servoP.write(angle);
    delay(15);
    }
    for(angle=35 ; angle>=0 ; angle-=1){
    servoP.write(angle);
    delay(15);
  }
  }
  
  
  
}
