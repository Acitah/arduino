#define buttonPin 8
#define LedPin 13
boolean Led_off=true;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(LedPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 byte buttonState= digitalRead(buttonPin);
  if(buttonState==LOW){
  delay(500);
    
   
 if(Led_off){
  Led_off=false;
  digitalWrite(LedPin,HIGH);
  }

  else{
    Led_off=true;
  digitalWrite(LedPin,LOW);
  }
  }
}
