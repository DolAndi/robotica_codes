const int echo = 3;
const int trig = 4;
long duracao, distancia;
const int led_red = 13;
const int led_green = 12;
const int led_yellow = 11;
const int button = 8;
const int distanciaMaxima = 100;
int contador = 0;
const int buzzer = 7;

void setup()
{
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duracao = pulseIn(echo, HIGH);
  distancia = (duracao/2) / 29.1;
  
  if(distancia < distanciaMaxima) {
    contador++;
    delay(400);
  }
  if(digitalRead(button)){
    if(contador > 0) {
    	contador--;
    	delay(400);
    }
  }
  
  acende(led_red, 14);
  acende(led_green, 4);
  acende(led_yellow, 9);
  
  if(contador >= 15) {
    tone(buzzer, 400);
  }
  else {
    noTone(buzzer);
  }
  Serial.println(contador);
  delay(400);
 }
    
void acende(int led, int numero) {
  if(contador > numero) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}