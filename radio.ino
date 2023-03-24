// int led = 13;
#include <Servo.h>          // Include servo library 
Servo myservo; 
int pos = 0;


int received = 0;

int i;

void setup() {

  Serial.begin(9600); 
  myservo.attach(2);
  // pinMode(led, OUTPUT);
  // Servo is stationary.
}


 

void loop() {
  
  if (Serial.available() > 0) {

  received = Serial.read();
  delay(1000); 
    if (received == 'y')
    {
      myservo.write(150);
      delay(1000); 
      myservo.write(93); 
    }

    if (received == 'a'){

    Serial.println("a is clicked");

    delay(2000);

    }

     else if (received == 'b'){

      for(i=0;i<5;i++){

        Serial.println("working");

    delay(1000);

    Serial.println("nothing");
    delay(1000);

    }

  } 

}

}
