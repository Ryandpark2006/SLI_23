// #include <Servo.h>          // Include servo library 
// Servo myServo; 
// int pos = 0;
// bool turned = false;

// int received = 0;

// int i;   

// void setup() {
//   Serial.begin(9600); 
//   myServo.attach(2);
//   // pinMode(led, OUTPUT);
//   // Servo is stationary.
//   // myServo.write(170);
// }


 

// void loop() {
//   if(turned == false)
//       {
//       myServo.write(0);      // Rotate the servo to 0 degrees
//       delay(1000);           // Wait for 1 second
//       // myServo.write(180);    // Rotate the servo to 180 degrees
//       // delay(1000);           // Wait for 1 second
//       myServo.write(90);
//       turned = true;

//       }
//   if (Serial.available() > 0) {

//   received = Serial.read();
//   // delay(1000); 
//     if (received == 'y')
//     {
//       if(turned == false)
//       {
//       myServo.write(0);      // Rotate the servo to 0 degrees
//       delay(1000);           // Wait for 1 second
//       // myServo.write(180);    // Rotate the servo to 180 degrees
//       // delay(1000);           // Wait for 1 second
//       myServo.write(90);
//       turned = true;

//       }
//     }

//     // if (received == 'a'){

//     // Serial.println("a is clicked");

//     // delay(2000);

//     // }

//     //  else if (received == 'b'){

//     //   for(i=0;i<5;i++){

//     //     Serial.println("working");

//     // delay(1000);

//     // Serial.println("nothing");
//     // delay(1000);

//     // }

//   } 

// }

#include <Servo.h>

Servo myServo;  // Create a servo object
bool turned = false;  // Flag to check if servo has been turned

void setup() {
  Serial.begin(9600);  // Start the serial communication
  myServo.attach(2);   // Attach the servo to pin 9
  myServo.write(88);
}

void loop() {
  // if (!turned) {
  //       for (int i = 0; i < 90; i++) {
  //         myServo.write(i);    // Rotate the servo from 0 to 180 degrees
  //         delay(30);           // Wait for 15 milliseconds
  //       }
  // }
  //  myServo.write(90);     // Stop the servo at 90 degrees
  //       turned = true; 
  if (Serial.available() > 0) {
    char received = Serial.read();  // Read the received data from the serial monitor

    if (received == 'y') {
      myServo.write(180); 
      delay(1000); 
        // if (!turned) {
        // for (int i = 0; i < 90; i++) {
        //   myServo.write(i);    // Rotate the servo from 0 to 180 degrees
        //   delay(30);           // Wait for 15 milliseconds
        // }
        // myServo.write(90);     // Stop the servo at 90 degrees
        // turned = true;         // Set the flag to true
    //  }
      myServo.write(88); 
    }
  }
}


