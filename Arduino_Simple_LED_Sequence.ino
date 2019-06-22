
int ledPins[] = {6,7,8,9,10,11,12,13};
int ledPinLength = 7;
int currArrayLed = 0;
boolean isIncrementing = true;

void setup() {               
  for(int i = 0; i < 8; i ++){
    pinMode(ledPins[i], OUTPUT);   
  }  
}

void loop() {
  linearSequence();
}

void currArrayHandler(){
   if(currArrayLed == ledPinLength){
      isIncrementing = false;
   } 
   else if(currArrayLed == 0) {
     isIncrementing = true;
   }
   updateCurrLed();
}

void updateCurrLed(){
  if(isIncrementing == true){
    currArrayLed++; 
  } else {
    currArrayLed--;     
  }
}

void linearSequence(){
  digitalWrite(ledPins[currArrayLed], 100); 
  delay(100);                     
  digitalWrite(ledPins[currArrayLed], LOW);   
  delay(100); 
  currArrayHandler();
}


