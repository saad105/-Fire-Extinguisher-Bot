#define m11 12 //Dc motor
#define m12 11 //DC motor
#define m21 10 //DC motor
#define m21 1  //DC motor
#define m22 9  //DC motor
#define m31 6  //DC pump motor
#define m32 7  //Dc pump motor

int Buzzer = 13;
int FlamePin1 = 2;
int FlamePin2 = 3;
int FlamePin3 = 4;
int Flame1= LOW;// when fire is detected the flame sensor gives the value as high
int Flame2= LOW;
int Flame3= LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer,OUTPUT);
  pinMode(FlamePin1,INPUT);
  pinMode(FlamePin2,INPUT);
  pinMode(FlamePin3,INPUT);
    Serial.begin(9600);
}

void loop() {
   Flame1=digitalRead(FlamePin1);
   Flame2=digitalRead(FlamePin2);
   Flame3=digitalRead(FlamePin3);
    if (Flame1== HIGH) {
    digitalWrite(Buzzer,HIGH);
    Serial.println("HIGH FLAME");
    digitalWrite(m31,HIGH);
    digitalWrite(m32,LOW);
   }
   else if (Flame2== HIGH) { //left logic
    digitalWrite(Buzzer,HIGH);
    digitalWrite(m31,LOW);
    digitalWrite(m32,LOW);
    Serial.println("HIGH FLAME");
      digitalWrite(m11,LOW);
      digitalWrite(m12,HIGH);
      digitalWrite(m21,HIGH);
      digitalWrite(m22,LOW);
      delay(250);
      digitalWrite(m11,LOW);
      digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
      digitalWrite(m22,LOW);
  
   }
    else if (Flame3== HIGH) { //right logic
    digitalWrite(Buzzer,HIGH);
    Serial.println("HIGH FLAME");
    digitalWrite(m31,LOW);
    digitalWrite(m32,LOW);
      digitalWrite(m11,HIGH);
      digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
      digitalWrite(m22,HIGH);
      delay(200);
      digitalWrite(m11,LOW);
      digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
      digitalWrite(m22,LOW);
   }
      
   else    //stop
   {
      digitalWrite(Buzzer,LOW);
      digitalWrite(m31,LOW);
      digitalWrite(m32,LOW);
      digitalWrite(m11,LOW);
      digitalWrite(m12,LOW);
      digitalWrite(m21,LOW);
      digitalWrite(m22,LOW);
   }
   
}
























