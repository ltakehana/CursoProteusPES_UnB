  
int motor1C1=2;
int motor1C2=3;
int motor2C1=4;
int motor2C2=5;

int buzzer = 9;

int leftSwitch=11;
int rightSwitch=12;
int reverseSwitch=13;

void setup() {
  
  pinMode(motor1C1,OUTPUT);
  pinMode(motor1C2,OUTPUT);
  pinMode(motor2C1,OUTPUT);
  pinMode(motor2C2,OUTPUT);

  pinMode(leftSwitch,INPUT);
  pinMode(rightSwitch,INPUT);
  pinMode(reverseSwitch,INPUT);
  
}

void loop() {
  int left=digitalRead(leftSwitch);
  int right=digitalRead(rightSwitch);
  int reverse=digitalRead(reverseSwitch);

  if(left==1 && right==0){
    digitalWrite(motor1C1,HIGH);
    digitalWrite(motor1C2,LOW);
    digitalWrite(motor2C1,LOW);
    digitalWrite(motor2C2,HIGH);
  }
  else if(left==0 && right==1){
    digitalWrite(motor1C1,LOW);
    digitalWrite(motor1C2,HIGH);
    digitalWrite(motor2C1,HIGH);
    digitalWrite(motor2C2,LOW);
  }
  else if(reverse==1){
    digitalWrite(motor1C1,LOW);
    digitalWrite(motor1C2,HIGH);
    digitalWrite(motor2C1,LOW);
    digitalWrite(motor2C2,HIGH);
    tone(buzzer,200,500);
  }
  else{
    digitalWrite(motor1C1,HIGH);
    digitalWrite(motor1C2,LOW);
    digitalWrite(motor2C1,HIGH);
    digitalWrite(motor2C2,LOW);
  }
  
}
