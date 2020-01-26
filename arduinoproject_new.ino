const int trigPin=9;
const int echoPin=10;
#define led1 4
#define led2 5
#define led3 6
#define led4 7
#define led5 8
#define led6 11
long time;
int distance;

void setup() {
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
Serial.begin(9600);  
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
 
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  time=pulseIn(echoPin,HIGH);
  distance=time*0.034/2;
  if(distance>=7)
  { 
    digitalWrite(led1,HIGH);
   
  }
  else
  {
    digitalWrite(led1,LOW);
  }
  if(distance>=14)
  { 
    digitalWrite(led2,HIGH);
    
  }
  else
  {
    digitalWrite(led2,LOW);
  }
  if (distance>=21)
  {
    digitalWrite(led3,HIGH);
   
  }
  else
  {
    digitalWrite(led3,LOW);
  }
  if (distance>=28)
  {
    digitalWrite(led4,HIGH);
    
    
  }
  else
  {
    digitalWrite(led4,LOW);
  }

  if (distance>=35)
  {
    digitalWrite(led5,HIGH);
    
    
  }
  else
  {
    digitalWrite(led5,LOW);
  }
  if (distance>=42)
  {
    digitalWrite(led6,HIGH);
  }
  else
  {
    digitalWrite(led6,LOW);
  }

  Serial.println("water level in boiler is ");
  Serial.println(distance);
  delay(1000);
}
