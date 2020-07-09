#include <Servo.h>
Servo servo;


void setup() {
  // put your setup code here, to run once:
servo.attach(3);


}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(11)==true && digitalRead(7)==false &&  digitalRead(5)==false){
  servo.write(0);
  }
if (digitalRead(11)==true && digitalRead(7)==true &&  digitalRead(5)==false){
   servo.write(95);
    }
if ( digitalRead(11)==true && digitalRead(7)==true &&  digitalRead(5)==true){
  servo.write(180);
  
  }
  if (digitalRead(11)==false && digitalRead(7)==false &&  digitalRead(5)==false){
  servo.write(0);
  
  }
  
  //sensor0Value=700;
  //sensor1Value=700;
  //sensor2Value=700;
}
