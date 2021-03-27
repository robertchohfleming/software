
// Initializations
#define PWM_1 6
#define PWM_2 9
#define M1_1 3
#define M1_2 4
#define M2_1 5
#define M2_2 8
// Motor 1 PWM pin is one of D2, D6, or D7 (you should determine the only one it could be)
// Motor 2 PWM pin is one of D9, D10, or D11 (is this possible?)
// PWM value range is 0-255
// Motor 1's 1A and 2A pins are D3 and D4
// Motor 2's 1A and 2A pins are D5 and D8

void setup() {

  // Setup all the motor control pins
  pinMode(PWM_1, OUTPUT);
  pinMode(PWM_2, OUTPUT);
  pinMode(M1_1, OUTPUT);
  pinMode(M1_2, OUTPUT);
  pinMode(M2_1, OUTPUT);
  pinMode(M2_2, OUTPUT);
  // Turn off all the motors
  analogWrite(PWM_1, 0);
  analogWrite(PWM_2, 0);
}

void loop() {

  // Move forward and set the speed (should last 5 seconds)
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
  digitalWrite(M2_1, HIGH);
  digitalWrite(M2_2, LOW);
  analogWrite(PWM_1, 120);
  analogWrite(PWM_2, 120);
  delay(5000);

  // Move backwards faster (should last 5 seconds)


  // Spin around in circles if the button is pressed and the light intensity is above a certain value (should last 5 seconds)

}
