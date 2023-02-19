#include <AFMotor.h>

// Motor kalkanının M3 ve M4 portlarına Devir başına 48 adım (7,5 derece) ile bir adım motor bağlanır.
AF_Stepper motor(48, 2);

void setup() {
Serial.begin(9600); // 9600 bps hızında seri port iletişimi başlatılır. 
Serial.println("Adım motor testi!");


motor.setSpeed(50);  // 50 rpm   
}

void loop() {
Serial.println("Tek bobin adımları");
motor.step(100, FORWARD, SINGLE); 
motor.step(100, BACKWARD, SINGLE); 

Serial.println("Çift bobin adımları");
motor.step(100, FORWARD, DOUBLE); 
motor.step(100, BACKWARD, DOUBLE);

Serial.println("Aralıklı bobin adımları");
motor.step(100, FORWARD, INTERLEAVE); 
motor.step(100, BACKWARD, INTERLEAVE); 

Serial.println("Mikroadım adımları");
motor.step(100, FORWARD, MICROSTEP); 
motor.step(100, BACKWARD, MICROSTEP); 
}
