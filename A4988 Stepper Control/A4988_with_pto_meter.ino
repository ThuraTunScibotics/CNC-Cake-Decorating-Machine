  int steppin = 4;
int dirpin = 3;
int stepdelay;

void setup() 
{
  pinMode(steppin, OUTPUT);
  pinMode(dirpin, OUTPUT);
  digitalWrite(dirpin, HIGH); // direction pin either low or high to move in either direction
}

void loop() 
{
  int val = analogRead(A0);
  stepdelay = map(val,0,255,10,2000);
  digitalWrite(steppin,LOW);
  delayMicroseconds(stepdelay);
  digitalWrite(steppin,HIGH);
  delayMicroseconds(stepdelay);

  delay(1000);
  digitalWrite(steppin,LOW);
  digitalWrite(steppin,LOW);
  
}
