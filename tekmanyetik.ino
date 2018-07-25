

int hallSensorPin = 5;     
int ledPin =  6;    
int state = 0;          

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);      
  pinMode(hallSensorPin, INPUT);     
}

void loop(){

 state = digitalRead(hallSensorPin);
Serial.println(state);
 delay(100);
 
  if (state == LOW) {        
    digitalWrite(ledPin, HIGH);  
    Serial.println("arac var");
  } 
  else {
    digitalWrite(ledPin, LOW); 
    Serial.println("arac yok");
  }
}
