unsigned long timerOne = 0; 
unsigned long timerTwo = 0;
unsigned long timeThree = 0;
unsigned long timerFour = 0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
}

  

void loop() {
   if (millis() - timerOne > 1000) {
    digitalWrite(13, HIGH);
    timerOne = millis(); 
  }
    
  else if (millis() - timerOne > 1000) {
    digitalWrite(13, LOW);
  }

    
  if (millis() - timerTwo > 2000) {
    digitalWrite(11, HIGH);
    timerTwo = millis();
  }
  
  else if (millis() - timerTwo > 2000) {
    digitalWrite(11, LOW);
  }

  //new
   if (millis() - timerThree > 500) {
    digitalWrite(9, HIGH);
    timerThree = millis();
  }
    
  else if (millis() - timerThree > 1000) {
    digitalWrite(9, LOW);
  }
  //new
  if (millis() - timerFour > 1500) {
    digitalWrite(7, HIGH);
    timerFour = millis();
  }
  else if (millis() - timerFour > 2000) {
    digitalWrite(7, LOW);
  }



