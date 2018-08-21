#define m11 12
#define m12 11
#define m21 10
#define m22 9
#define m31 6
#define m32 7

int Buzzer = 13;
int FlamePin1 = 2;
int FlamePin2 = 3;
int FlamePin3 = 4;
int Flame1= LOW;// when fire is exposed
int Flame2= LOW;// when fire is exposed
int Flame3= LOW;// when fire is exposed
// when fire is exposed
void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer,OUTPUT);
  pinMode(FlamePin1,INPUT);
  pinMode(FlamePin2,INPUT);
  pinMode(FlamePin3,INPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
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
    else if (Flame3== HIGH) { //left right
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
      
   else 
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
























