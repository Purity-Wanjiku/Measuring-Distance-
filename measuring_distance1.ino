int TRIG = 9 ;
int ECHO = 10;
int RED = 3;
int GREEN = 2;
int Distance;
int Duration;


void setup()
{
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIG, LOW);
  delay(2); // Wait for 1000 millisecond(s)
  digitalWrite(TRIG, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(TRIG, LOW);
  
  Duration = pulseIn(ECHO, HIGH);
    
  Distance = (0.0343 * Duration) / 2;
  Serial.print (Distance);
  Serial.println("cm");

  if (Distance >=30){
  digitalWrite (GREEN, HIGH);
  delay(5);
  digitalWrite(GREEN, LOW); 
  delay(5);
 
  }
  else{
   digitalWrite(RED, HIGH); 
   delay(5);
   digitalWrite(RED, LOW); 
   delay(5);
  
  }

  delay(100);
  
  
    
}