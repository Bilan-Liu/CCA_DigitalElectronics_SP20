const int led1 = 13;   
const int led2 = 8;
const int ldrPin = A0;  


void setup() {

  
  pinMode(led1, OUTPUT);  //initialize the LED pin as an output
   pinMode(led2, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
}

void loop() {

  int ldrStatus = analogRead(ldrPin);   
  

   if (ldrStatus <=100) {

    digitalWrite(led1, HIGH);   //turn LED on
   }
  else {
    digitalWrite(led1, LOW);    //turn LED off  
  }

  if (ldrStatus <=100) {

    digitalWrite(led2, LOW);               //turn LED off
   }
  else {
    digitalWrite(led2, HIGH);          //turn LED on  
  }
}
