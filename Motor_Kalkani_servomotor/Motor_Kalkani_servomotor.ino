#include <AFMotor.h>
#include <Servo.h>   // Kütüphane eklenir. 
Servo servomotor;    // servomotor isimli bir servo üretilir.

int servopozisyon = 0 ;

void setup() {
servomotor.attach (10);  // Servo motor pin tanımlanır. 
}

void loop() {
for (servopozisyon = 0; servopozisyon <=180; servopozisyon +=1){

servomotor.write(servopozisyon);
delay(10);
}

for (servopozisyon=180; servopozisyon >= 0; servopozisyon -=1){
servomotor.write(servopozisyon);
delay(10);
}
}
