const int LED1=13;
const int LED2=12; 
const int LED3=8;  

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH); //13-pin led connected 
  delay(500);
  digitalWrite(LED1,LOW);
  delay(500);

  digitalWrite(LED2,HIGH); //12-pin led connected
  delay(500);
  digitalWrite(LED2,LOW);
  delay(500);

  digitalWrite(LED3,HIGH); //8-pin led connected
  delay(500);
  digitalWrite(LED3,LOW);
  delay(500);
}
