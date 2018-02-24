const int right = 2; //(right)
const int left = 3; // (left)
const int center = 1; // (center)
const int motorPin1 = 6;
const int motorPin2 = 5;
const int motorPin3 = 10;
const int motorPin4 = 9;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(right, INPUT);
  pinMode(left, INPUT);
  pinMode(center, INPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);

  // put your setup code here, to run once:

} 

void loop() {
  if(digitalRead(left) == LOW && digitalRead(center) == HIGH && digitalRead(right) == LOW)
  {
    analogWrite(motorPin1, 255);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 255);
      
  }
   else if(digitalRead(left) == HIGH && digitalRead(center) == HIGH && digitalRead(right) == HIGH)
  {
    analogWrite(motorPin1, 255);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 255);
      
  }
 else if(digitalRead(left) == LOW && digitalRead(center) == HIGH && digitalRead(right) == HIGH)
 {
    analogWrite(motorPin1, 0);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 255);
 }
  else if(digitalRead(left) == HIGH && digitalRead(center) == HIGH && digitalRead(right) == LOW)
 {
    analogWrite(motorPin1,255);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 0);
 }
   else if(digitalRead(left) == HIGH && digitalRead(center) == HIGH && digitalRead(right) == LOW)
 {
    analogWrite(motorPin1,255);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 0);
 }
  else if(digitalRead(left) == HIGH && digitalRead(center) == LOW && digitalRead(right) == LOW)
 {
    analogWrite(motorPin1,0);
    analogWrite(motorPin2, 255);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 230);
 }
  else if(digitalRead(left) == LOW && digitalRead(center) == LOW && digitalRead(right) == HIGH)
 {
    analogWrite(motorPin1,230);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 255);
    analogWrite(motorPin4, 0);
 }
  else
  {
   analogWrite(motorPin1, 0);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 0); 
  }
  delay(100);
  // put your main code here, to run repeatedly:

}
