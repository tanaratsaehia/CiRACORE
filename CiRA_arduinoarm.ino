#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int value;
int loopcount = 0;
int pos = 0;

void setup() {
  Serial.begin(115200);
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);

  //defaul form
  servo1.write(90);
  servo2.write(0);
  servo3.write(0);
  servo4.write(130);
}

void loop() {
  if(Serial.available() > 0){
    value = Serial.read();
    Serial.println(value);
    Serial.println(loopcount);
    if(loopcount >= 1){
      value = "";
      loopcount = 0;
    }
    else if(value == 49){
      Serial.println("Hello object 1");
      loopcount += 1;
      obj_1();
    }else if(value == 50){
      Serial.println("Hello object 2");
      loopcount += 1;
      obj_2();
    }
  }
}




void obj_1(){
  for (pos = 0; pos <= 40; pos += 1) {  //servo2
    servo2.write(pos);              
    delay(20);                       
  }for (pos = 0; pos <= 80; pos += 1) { //servo3
    servo3.write(pos);              
    delay(20);                       
  }servo4.write(65);for (pos = 80; pos >= 0; pos -= 1) {   //servo3
    servo3.write(pos);              
    delay(20);                       
  }for (pos = 40; pos >= 0; pos -= 1) {   //servo2
    servo2.write(pos);              
    delay(15);                       
  }for (pos = 90; pos <= 165; pos += 1) {   //servo1
    servo1.write(pos);
    delay(20);                       
  }for (pos = 0; pos <= 40; pos += 1) {  //servo2
    servo2.write(pos);
    delay(20);                       
  }for (pos = 0; pos <= 80; pos += 1) { //servo3
    servo3.write(pos);
    delay(20);
  }servo4.write(130);for (pos = 80; pos >= 0; pos -= 1) { //servo3
    servo3.write(pos);
    delay(20);
  }for (pos = 40; pos >= 0; pos -= 1) {  //servo2
    servo2.write(pos);
    delay(20);
  }for (pos = 165; pos >= 90; pos -= 1) {   //servo1
    servo1.write(pos);              
    delay(20);                       
  }
}

void obj_2(){
  for (pos = 0; pos <= 40; pos += 1) {  //servo2
    servo2.write(pos);              
    delay(20);                       
  }for (pos = 0; pos <= 80; pos += 1) { //servo3
    servo3.write(pos);              
    delay(20);                       
  }servo4.write(65);for (pos = 80; pos >= 0; pos -= 1) {   //servo3
    servo3.write(pos);              
    delay(20);                       
  }for (pos = 40; pos >= 0; pos -= 1) {   //servo2
    servo2.write(pos);              
    delay(15);                       
  }for (pos = 90; pos >= 30; pos -= 1) {   //servo1
    servo1.write(pos);
    delay(20);                       
  }for (pos = 0; pos <= 40; pos += 1) {  //servo2
    servo2.write(pos);
    delay(20);                       
  }for (pos = 0; pos <= 80; pos += 1) { //servo3
    servo3.write(pos);
    delay(20);
  }servo4.write(130);for (pos = 80; pos >= 0; pos -= 1) { //servo3
    servo3.write(pos);
    delay(20);
  }for (pos = 40; pos >= 0; pos -= 1) {  //servo2
    servo2.write(pos);
    delay(20);
  }for (pos = 30; pos <= 90; pos += 1) {   //servo1
    servo1.write(pos);              
    delay(20);                       
  }
}


void obj_3(){
   
}