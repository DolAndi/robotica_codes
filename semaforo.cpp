
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  //vermelho
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //amarelo
  digitalWrite(7, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(7, LOW);
  delay(200); // Wait for 200 millisecond(s)
  
  //verde
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
