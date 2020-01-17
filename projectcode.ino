int trigPin = 9;
int echoPin = 10;
int revright = 6;      
int fwdleft = 5;      
int revleft= 4;       
int fwdright= 7;       


void setup() {
  Serial.begin(9600); 
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
 
  
  if((distance>50))
 {
  digitalWrite(5,HIGH);                               
   digitalWrite(4,LOW);                               
   digitalWrite(6,LOW);                              
   digitalWrite(7,HIGH);                             
 }
 
  else if(distance<50)  
 {
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,HIGH);                                  
   digitalWrite(7,LOW);
   delay(500);
                                            
 }
 
}
