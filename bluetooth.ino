int m1 = A0;
int high = 255;
int low = 0;
String motion;

void setup(){
  Serial.begin(9600);
  pinMode(m1, OUTPUT);
}

void loop(){
  Serial.println("Silakan ketik 'p' untuk memutar, 's' untuk berhenti ");
  while(Serial.available()==0){  }

  motion=Serial.readString();
  if(motion=="p"){
    analogWrite(m1,high);
  }
  if (motion=="s"){
    analogWrite(m1,low);
  }
}
