
#include <Servo.h>

Servo servo_7;

void setup()
{
  pinMode(A0, INPUT);
  servo_7.attach(7, 500, 2500);

  if ((-40 + 0.488155 * (analogRead(A0) - 20)) > 30) {
    servo_7.write(90);
  }
}

void loop()
{
  delay(10); 
}