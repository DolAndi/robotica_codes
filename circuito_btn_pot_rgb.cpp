const int green = 9;
const int red = 11;
const int blue = 10;

const int bRed = 7;
const int bGreen = 6;
const int bBlue = 5;

const int potRed = A0;
const int potGreen = A1;
const int potBlue = A2;

int clickRed = 0;
int valorRed = 0;

int clickGreen = 0;
int valorGreen = 0;

int clickBlue = 0;
int valorBlue = 0;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
  pinMode(bRed, INPUT);
  pinMode(bGreen, INPUT);
  pinMode(bBlue, INPUT);
  
  pinMode(potRed, INPUT);
  pinMode(potGreen, INPUT);
  pinMode(potBlue, INPUT);
  
  
  Serial.begin(9600);
}

void loop(){
  {
  analogWrite(A3, (analogRead(A2)/4));
  analogWrite(A4, (analogRead(A0)/4));	
  analogWrite(A5, (analogRead(A1)/4));
}
  
  valorRed = (analogRead(potRed)/4);
  valorGreen = (analogRead(potGreen)/4);
  valorBlue = (analogRead(potBlue)/4);
  
  Serial.println(clickRed);
  Serial.println(valorRed);
  
  Serial.println(clickGreen);
  Serial.println(valorGreen);
  
  Serial.println(clickBlue);
  Serial.println(valorBlue);
  
  if(clickRed % 2 != 0){
    analogWrite(red, valorRed );
    delay(50);
  }
  if(clickRed % 2 == 0){
    analogWrite(red, 0); 
    delay(50);
  }
  if(clickGreen % 2 != 0){
    analogWrite(green, valorGreen );
    delay(50);
  }
  if(clickGreen % 2 == 0){
    analogWrite(green, 0); 
    delay(50);
  }
  if(clickBlue % 2 != 0){
    analogWrite(blue, valorBlue );
    delay(50);
  }
  if(clickBlue % 2 == 0){
    analogWrite(blue, 0); 
    delay(50);
  }

  
  if(digitalRead(bRed)){
   	clickRed ++;
    delay(70);
  }
  if(digitalRead(bGreen)){
   	clickGreen ++;
    delay(70);
  }
  if(digitalRead(bBlue)){
   	clickBlue ++;
    delay(70);
  }
 
  
  
  
}