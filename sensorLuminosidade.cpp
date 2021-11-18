const int luminosidade = A5;

void setup()
{
  pinMode(luminosidade, INPUT);
  Serial.begin(9600);
}

void loop(){
  int luz = analogRead(luminosidade);
  Serial.print(luz);
  
  delay(500);
}