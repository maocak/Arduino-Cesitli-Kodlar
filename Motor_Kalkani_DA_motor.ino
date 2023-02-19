#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
Serial.begin(9600); //  9600 bps de seri iletişim başlatılır. 
Serial.println("Robotik araba kodu, l293d");
}

void loop() {

motor1.setSpeed( speed(50) ); //motor 1 hızı 50%'e ayarlanır. 
motor1.run(FORWARD);// motor 1 ileri doğru hareket eder. 
delay(2000); //2 saniye bekler. 
  
motor2.setSpeed( speed(100) );//motor 2 hızı 100%'e ayarlanır. 
motor2.run(BACKWARD);// motor 2 ileri doğru hareket eder. 
delay(2000);
  
motor3.setSpeed( speed(70) );
motor3.run(FORWARD);
delay(2000);

motor4.setSpeed( speed(90) );
motor4.run(FORWARD);
delay(2000);
  
motor1.run(BRAKE);
motor2.run(RELEASE);  
motor3.run(RELEASE);
motor4.run(RELEASE);   
delay(2000);

motor1.setSpeed(speed(100));
motor1.run(BACKWARD);
delay(2000);
  
motor1.run(RELEASE);
delay(1000);
}

int  speed(int percent)
{
return map(percent, 0, 100, 0, 255);
}
