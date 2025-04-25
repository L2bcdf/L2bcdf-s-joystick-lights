//c++
int xPin = A0;
int yPin = A1;
int buttonPin = 2;
int buttonState = 0;
 
void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  if (xValue > 767.25) {
     digitalWrite (5 , 1);
  }
     else 
     digitalWrite (5 , 0);

  if (yValue < 255.75) {
      digitalWrite (9 , 1);
  }
     else 
     digitalWrite (9 , 0);

  if (xValue < 255.75) {
     digitalWrite (3 , 1);
  }
     else 
     digitalWrite (3 , 0);

  if (yValue > 767.25) {
       digitalWrite (10 , 1);
  }
    else 
    digitalWrite (10 , 0);
   if (xValue > 767.25) {
     Serial.print (1 , OUTPUT);
  }
     else 
     Serial.print (0 , OUTPUT);

  if (yValue < 255.75) {
      Serial.print (2 , OUTPUT);
  }
     else 
     Serial.print (0 , OUTPUT);

  if (xValue < 255.75) {
     Serial.print (3 , OUTPUT);
  }
     else 
     Serial.print (0 , OUTPUT);

  if (yValue > 767.25) {
       Serial.print (4 , OUTPUT);
  }
    else 
    Serial.print (0 , OUTPUT);
    Serial.println(); 
   delay(1);
}