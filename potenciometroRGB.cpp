const int ledVerde = 12;
const int ledAmarelo = 11;
const int ledLaranja = 10;
const int ledVermelho = 9;

const int potenciometro = 5;
int valorpot = 0;
float luminosidade = 0;

void setup () {
Serial.begin(9600);  

pinMode(ledVerde, OUTPUT);
pinMode(ledAmarelo, OUTPUT);
pinMode(ledLaranja, OUTPUT);
pinMode(ledVermelho, OUTPUT);
}

void loop (){
int valorpot = analogRead(potenciometro); 
delay(valorpot);
luminosidade = map(valorpot, 0, 1023, 0, 255);
  
  if (valorpot <= 255){
    digitalWrite(ledVerde,HIGH);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledLaranja,LOW);
    digitalWrite(ledVermelho,LOW);
  }
  else if (valorpot < 511 & valorpot >= 256){
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledAmarelo,HIGH);
    digitalWrite(ledLaranja,LOW);
    digitalWrite(ledVermelho,LOW);
  }
  else if (valorpot < 800 & valorpot >= 512){
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledLaranja,HIGH);
    digitalWrite(ledVermelho,LOW);
  }
  else if (valorpot >= 801){
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledLaranja,LOW);
    digitalWrite(ledVermelho,HIGH);
}
  else{
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledLaranja,LOW);
    digitalWrite(ledVermelho,LOW);
}
  
  
Serial.print("Valor lido do potenciometro : ");
Serial.print(valorpot);   
Serial.print(" = Luminosidade : ");
Serial.println(luminosidade);  
}