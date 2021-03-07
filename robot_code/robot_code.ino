int rightMotorR = 23;
int rightMotorB = 22;
int leftMotorR = 24;
int leftMotorB = 25;
int rightMotorS = 45;
int leftMotorS = 44;


void setup() {
  // put your setup code here, to run once:

 pinMode(rightMotorR, OUTPUT);
 pinMode(rightMotorB, OUTPUT);
 pinMode(rightMotorS, OUTPUT);
 pinMode(leftMotorR, OUTPUT);
 pinMode(leftMotorB, OUTPUT);
 pinMode(leftMotorS, OUTPUT);

 analogWrite(rightMotorS, 100); //0 - 255  speed of the car
 analogWrite(leftMotorS, 100);
}

void loop() {
  // put your main code here, to run repeatedly:

  car_forward();
  delay(2000);
  car_backward();
  delay(2000);
  car_right();
  delay(2000);
  car_left();
  delay(2000);
  car_stop();
  delay(2000);

}


void car_forward(){
  digitalWrite(rightMotorR, HIGH);
  digitalWrite(rightMotorB, LOW);
  digitalWrite(leftMotorR, HIGH);
  digitalWrite(leftMotorB, LOW);
  }

void car_backward(){
  digitalWrite(rightMotorR, LOW);
  digitalWrite(rightMotorB, HIGH);
  digitalWrite(leftMotorR, LOW);
  digitalWrite(leftMotorB, HIGH);
  }

void car_right(){
  digitalWrite(rightMotorR, HIGH);
  digitalWrite(rightMotorB, LOW);
  digitalWrite(leftMotorR, LOW);
  digitalWrite(leftMotorB, HIGH);
  }

void car_left(){
  digitalWrite(rightMotorR, LOW);
  digitalWrite(rightMotorB, HIGH);
  digitalWrite(leftMotorR, HIGH);
  digitalWrite(leftMotorB, LOW);
  }

void car_stop(){
  digitalWrite(rightMotorR, LOW);
  digitalWrite(rightMotorB, LOW);
  digitalWrite(leftMotorR, LOW);
  digitalWrite(leftMotorB, LOW);
  }
