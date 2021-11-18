const int buzzer = 11;
const int luminosidade = A4;
const int led_verde = 5;
const int pot = A5;
  
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(luminosidade, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(pot, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(analogRead(luminosidade) <= 300){
    tone(buzzer, 800);
  } else
  {noTone(buzzer);}
  analogWrite(led_verde, analogRead(pot));
}