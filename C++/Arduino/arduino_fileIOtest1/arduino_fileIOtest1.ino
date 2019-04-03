#include <SoftwareSerial.h>

//import processing.serial.*;
Serial mySerial;
PrintWriter output;

int pushButton = 2;


void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);

  mySerial = new Serial( this, Serial.list()[0], 9600);
  output = createWriter( "test1.txt" );

}


void draw() {
  
  if (mySerial.avaliable() > 0 ) {
    int buttonState = digiitalRead(pushButton);
    if ( buttonState != null ) {
      output.println( buttonState );
    }
  }
}

void keyPressed() {
  output.flush();
  output.close();
 // exit();
}

void loop() {
  
}

//
//void loop() {
//  int buttonState = digitalRead(pushButton);
//  if (buttonState != 1 ){  
//    Serial.print("Button not pressed\n");
//  }
//  if (buttonState == 1) {
//    Serial.print("Button pressed\n");
//  }
//  delay(1);
//}
