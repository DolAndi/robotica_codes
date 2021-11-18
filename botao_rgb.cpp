
const int ledVerde = 13;
const int ledAmarelo = 12;
const int ledLaranja = 11;
const int ledVermelho = 10;

const int botaoAdd = 7;
const int botao

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledLaranja, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  
  pinMode(botaoAdd, OUTPUT);
}

void loop()
{
  int click = digitalRead(botao);
  
  if (click) {
   contador++;
   delay(200);
  }
  
  if(contador <= 5) {
  	digitalWrite(ledVerde, HIGH);
  }
  if(contador >= 6) {
  	digitalWrite(ledAmarelo, HIGH);
  }
  if(contador >= 11) {
  	digitalWrite(ledLaranja, HIGH);
  }
  if(contador > 15) {
  	digitalWrite(ledVermelho, HIGH);
  }
  
  
}