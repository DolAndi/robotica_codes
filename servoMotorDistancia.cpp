#include <Servo.h>
Servo servo;
const int trig1 = 13;
const int echo1 = 12;
const int trig2 = 6;
const int echo2 = 5;
const int servo1 = 9;
const int cc = 8;

void setup(){
  Serial.begin(9600);
  
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);
  
  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
  
  servo.attach(9);
  servo.write(0);
  
  pinMode(cc, OUTPUT);
}
void loop(){
  
  Serial.println(getDistancia(trig1, echo1));
  
  if(getDistancia(trig1, echo1) < 50){
    Serial.println("entrou");
  	servo.write(180);
    delay(2000);
  } else {
  	servo.write(0);
  }
  if(getDistancia(trig2, echo2) < 5){
    digitalWrite(cc, HIGH);
    delay(500);
  } else {
  	digitalWrite(cc, LOW);
  }
}
long getDistancia(int trig, int echo){
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(12);
  digitalWrite(trig, LOW);
  
  long duracao = pulseIn(echo, HIGH);
  
  long distancia = (duracao/2) / 29.1;
  
  return distancia;
}