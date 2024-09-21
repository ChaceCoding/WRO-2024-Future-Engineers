#include <Wire.h>
#include <Servo.h>
#include <MotorDriver.h>
#include <PID_v1.h>

#define TRIG_PIN_A 9
#define ECHO_PIN_A 10
#define TRIG_PIN_B 8
#define ECHO_PIN_B 7
#define TRIG_PIN_C 2
#define ECHO_PIN_C 4

const int trigPin = 2;
const int echoPin = 4;

Servo myservo;
MotorDriver motorDriver = MotorDriver(YF_4WDMW);

long duration;
int distance;
int Speed;

int centrePoint = 100;
int servoPos = 95;


int speed = 100;
char runLoop = 'b'; // Initialize runLoop to 'b'

double Setpoint = 20; // Setpoint distance in cm
double Input, Output;
double Kp = 2, Ki = 0.5, Kd = 0.4; // PID constants
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

void setup() {
  myservo.attach(13);
  Serial.begin(9600);

  myPID.SetMode(AUTOMATIC);
  myPID.SetOutputLimits(-20, 30);
  myPID.SetSampleTime(100); 

  pinMode(TRIG_PIN_A, OUTPUT);
  pinMode(ECHO_PIN_A, INPUT);
  pinMode(TRIG_PIN_B, OUTPUT);
  pinMode(ECHO_PIN_B, INPUT);
  pinMode(TRIG_PIN_C, OUTPUT);
  pinMode(ECHO_PIN_C, INPUT);

  // Move the car forward initially
  motorDriver.setSingleMotor(M3, 100);

  long distanceA = readUltrasonicDistance(TRIG_PIN_A, ECHO_PIN_A);
  long distanceC = readUltrasonicDistance(TRIG_PIN_C, ECHO_PIN_C);

  if (distanceA < 80) {
    runLoop = 'a';
    speed = 100;
  } else if (distanceC < 80) {
    runLoop = 'c';
    speed = 100;
  }
  delay(100);
}

void loop() {
  long distanceA = readUltrasonicDistance(TRIG_PIN_A, ECHO_PIN_A);
  long distanceB = readUltrasonicDistance(TRIG_PIN_B, ECHO_PIN_B);
  long distanceC = readUltrasonicDistance(TRIG_PIN_C, ECHO_PIN_C);

  Serial.print("Distance A: "); Serial.print(distanceA); 
  Serial.print(" cm, Distance B: "); Serial.print(distanceB);
  Serial.print(" cm, Distance C: "); Serial.print(distanceC);
  Serial.print(" cm, Run Loop: "); Serial.println(runLoop);

  Input = distanceA - Setpoint;
  myPID.Compute(); 
  servoPos = centrePoint - Output; // Adjust servo position based on PID output
  servoPos = constrain(servoPos, 80,110);

  if (distanceB < 80) {
    if (runLoop == 'a' && distanceC > 100) {
      loop_a();
    } else if (runLoop == 'c'&& distanceA > 100) {
      loop_c();
    }
  } else {
    loop_b();
  }
}

long readUltrasonicDistance(int trigPin, int echoPin) {
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0343;

  return distance;
}

void loop_a() {
  motorDriver.setSingleMotor(M3, 200);
  myservo.write(50);
  delay(1200);
  motorDriver.setSingleMotor(M3,-120);
  myservo.write(95);
  delay(550);
}

void loop_b() {
  myservo.write(servoPos);
  motorDriver.setSingleMotor(M3, 150);
}

void loop_c() {
  motorDriver.setSingleMotor(M3,-200); // Move the car backward
  myservo.write(130);
  delay(1200);
  motorDriver.setSingleMotor(M3,-120);
  myservo.write(95);
  delay(550);

}