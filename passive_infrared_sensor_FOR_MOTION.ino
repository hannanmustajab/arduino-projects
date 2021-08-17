  int LED =2;
  // Declare sensorOutputPin to D0. 
  uint8_t sensorOutputPin = D0;
  
  
void setup() {
  
  // Setup sensorOutputPin to INPUT mode. This means it will read value from the sensor. 
  pinMode(sensorOutputPin,INPUT);
  
  // GPIO pin on which LED is connected.
  pinMode(LED,OUTPUT);
  
  // Begin Serial Communication.
  Serial.begin(9600);
  
}

void loop() {
 int sensorvalue = digitalRead(sensorOutputPin);
 Serial.println(sensorvalue);
 
 if (sensorvalue == HIGH){
  digitalWrite(LED,HIGH);
  delay(1000);
 }
 else if (sensorvalue == LOW) digitalWrite(LED,LOW);
   

}
