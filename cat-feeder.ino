#define MOTOR_PIN 9
#define RUNTIME 4300
#define INTERVAL 1000 * 60 * 60 * 24 - RUNTIME
#define MOTOR_VOLTAGE 108

// Note, delay can accept an unsigned long, which means it can delay (up to) 4,294,967,295
// a.k.a. 1,193 hours or 49.7 days

void setup() {
  pinMode(MOTOR_PIN, OUTPUT); // Set motor driver pin high
}

void loop() {
  analogWrite(MOTOR_PIN, MOTOR_VOLTAGE); // Turn on the motor
  delay(RUNTIME);                        // Let it spin
  analogWrite(MOTOR_PIN, 0);             // Turn off the motor
  delay(INTERVAL);                       // Wait before running again (The long wait)
}
