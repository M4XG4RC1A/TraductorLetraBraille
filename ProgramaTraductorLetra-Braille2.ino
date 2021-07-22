#include <Servo.h>

Servo Point1;
Servo Point2;
Servo Point3;
Servo Point4;
Servo Point5;
Servo Point6;

char Imp;

int inicio123 = 0;
int inicio456 = 180;
int cambio = 120;

int ON123 = inicio123 + cambio;
int OFF123 =  inicio123;
int ON456 = inicio456 - cambio;
int OFF456 = inicio456;

int DecCodified;
int Codified;
int Antes1;
int Antes2;
int Antes3;
int Antes4;
int Antes5;
int Antes6;
int Ahora1;
int Ahora2;
int Ahora3;
int Ahora4;
int Ahora5;
int Ahora6;
int bin;
int binario1;
int binario2;
int binario;

int completeTime = 2000;
int defaultTime = 50;
int servozTime = 150;
int extraTime = completeTime-(defaultTime+servozTime*3);

void setup() {
  // put your setup code here, to run once:
  Point1.attach(8);
  Point2.attach(7);
  Point3.attach(10);
  Point4.attach(11);
  Point5.attach(12);
  Point6.attach(13);
  Point1.write(OFF123);
  Point2.write(OFF123);
  Point3.write(OFF123);
  Point4.write(OFF456);
  Point5.write(OFF456);
  Point6.write(OFF456);
  Ahora1=0;
  Ahora2=0;
  Ahora3=0;
  Ahora4=0;
  Ahora5=0;
  Ahora6=0;
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  //if (Serial.available()) {
  //  Imp = Serial.read();
  //  ImpLetra(Imp);
  //  Serial.println(Imp);
  //  delay(1000);
  //}
  /*
  Imp = 'h'; Serial.println(Imp);
  DecCodified = LetraBin(Imp); Serial.println(DecCodified);
  int Ultimo;
  Codified = num2bin(DecCodified);
  DecCodified = DecCodified%2; Serial.println(DecCodified);
  Ultimo = num2binF(DecCodified); Serial.println(String(Codified*10+Ultimo));
  Antes1 = Ahora1; Antes2 = Ahora2; Antes3 = Ahora3; Antes4 = Ahora4; Antes5 = Ahora5; Antes6 = Ahora6;
  Ahora2 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora3 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora4 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora5 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora6 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora1 = Ultimo;  
  Eficientar(Ahora1,Ahora2,Ahora3,Ahora4,Ahora5,Ahora6,Antes1,Antes2,Antes3,Antes4,Antes5,Antes6);
  delay(extraTime+defaultTime);

  Imp = 'o'; Serial.println(Imp);
  DecCodified = LetraBin(Imp); Serial.println(DecCodified);
  Ultimo = 0;
  Codified = num2bin(DecCodified);
  DecCodified = DecCodified%2; Serial.println(DecCodified);
  Ultimo = num2binF(DecCodified); Serial.println(String(Codified*10+Ultimo));
  Antes1 = Ahora1; Antes2 = Ahora2; Antes3 = Ahora3; Antes4 = Ahora4; Antes5 = Ahora5; Antes6 = Ahora6;
  Ahora2 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora3 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora4 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora5 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora6 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora1 = Ultimo;  
  Eficientar(Ahora1,Ahora2,Ahora3,Ahora4,Ahora5,Ahora6,Antes1,Antes2,Antes3,Antes4,Antes5,Antes6);
  delay(extraTime+defaultTime);

  Imp = 'l'; Serial.println(Imp);
  DecCodified = LetraBin(Imp); Serial.println(DecCodified);
  Ultimo = 0;
  Codified = num2bin(DecCodified);
  DecCodified = DecCodified%2; Serial.println(DecCodified);
  Ultimo = num2binF(DecCodified); Serial.println(String(Codified*10+Ultimo));
  Antes1 = Ahora1; Antes2 = Ahora2; Antes3 = Ahora3; Antes4 = Ahora4; Antes5 = Ahora5; Antes6 = Ahora6;
  Ahora2 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora3 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora4 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora5 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora6 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora1 = Ultimo;  
  Eficientar(Ahora1,Ahora2,Ahora3,Ahora4,Ahora5,Ahora6,Antes1,Antes2,Antes3,Antes4,Antes5,Antes6);
  delay(extraTime+defaultTime);

  Imp = 'a'; Serial.println(Imp);
  DecCodified = LetraBin(Imp); Serial.println(DecCodified);
  Ultimo = 0;
  Codified = num2bin(DecCodified);
  DecCodified = DecCodified%2; Serial.println(DecCodified);
  Ultimo = num2binF(DecCodified); Serial.println(String(Codified*10+Ultimo));
  Antes1 = Ahora1; Antes2 = Ahora2; Antes3 = Ahora3; Antes4 = Ahora4; Antes5 = Ahora5; Antes6 = Ahora6;
  Ahora2 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora3 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora4 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora5 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora6 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora1 = Ultimo;  
  Eficientar(Ahora1,Ahora2,Ahora3,Ahora4,Ahora5,Ahora6,Antes1,Antes2,Antes3,Antes4,Antes5,Antes6);
  delay(extraTime+defaultTime);

  Imp = ' '; Serial.println(Imp);
  DecCodified = LetraBin(Imp); Serial.println(DecCodified);
  Ultimo = 0;
  Codified = num2bin(DecCodified);
  DecCodified = DecCodified%2; Serial.println(DecCodified);
  Ultimo = num2binF(DecCodified); Serial.println(String(Codified*10+Ultimo));
  Antes1 = Ahora1; Antes2 = Ahora2; Antes3 = Ahora3; Antes4 = Ahora4; Antes5 = Ahora5; Antes6 = Ahora6;
  Ahora2 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora3 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora4 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora5 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora6 = Codified%10; Codified=(Codified-Codified%10)/10; 
  Ahora1 = Ultimo;  
  Eficientar(Ahora1,Ahora2,Ahora3,Ahora4,Ahora5,Ahora6,Antes1,Antes2,Antes3,Antes4,Antes5,Antes6);
  delay(extraTime+defaultTime);
  */
  if (Serial.available()) {
    Imp = Serial.read();
    Serial.println(Imp);
    DecCodified = LetraBin(Imp);
    Serial.println(DecCodified);
    int Ultimo;
    Codified = num2bin(DecCodified);
    DecCodified = DecCodified%2;
    Serial.println(DecCodified);
    Ultimo = num2binF(DecCodified);
    Serial.println(String(Codified*10+Ultimo));
    Antes1 = Ahora1;
    Antes2 = Ahora2;
    Antes3 = Ahora3;
    Antes4 = Ahora4;
    Antes5 = Ahora5;
    Antes6 = Ahora6;
    Ahora2 = Codified%10;
    Codified=(Codified-Codified%10)/10;
    Ahora3 = Codified%10;
    Codified=(Codified-Codified%10)/10;
    Ahora4 = Codified%10;
    Codified=(Codified-Codified%10)/10;
    Ahora5 = Codified%10;
    Codified=(Codified-Codified%10)/10;
    Ahora6 = Codified%10;
    Codified=(Codified-Codified%10)/10;
    Ahora1 = Ultimo;
    
    Eficientar(Ahora1,Ahora2,Ahora3,Ahora4,Ahora5,Ahora6,Antes1,Antes2,Antes3,Antes4,Antes5,Antes6);
    delay(extraTime);
  }
  delay(defaultTime);
  
}

int LetraBin(char letra){
  switch(letra){
    case 'a':
      bin=1;
      break;
    case 'b':
      bin=3;
      break;
    case 'c':
      bin=9;
      break;
    case 'd':
      bin=25;
      break;
    case 'e':
      bin=17;
      break;
    case 'f':
      bin=11;
      break;
    case 'g':
      bin=27;
      break;
    case 'h':
      bin=19;
      break;
    case 'i':
      bin=10;
      break;
    case 'j':
      bin=26;
      break;
    case 'k':
      bin=5;
      break;
    case 'l':
      bin=7;
      break;
    case 'm':
      bin=13;
      break;
    case 'n':
      bin=29;
      break;
    case 'o':
      bin=21;
      break;
    case 'p':
      bin=15;
      break;
    case 'q':
      bin=31;
      break;
    case 'r':
      bin=23;
      break;
    case 's':
      bin=14;
      break;
    case 't':
      bin=30;
      break;
    case 'u':
      bin=37;
      break;
    case 'v':
      bin=39;
      break;
    case 'w':
      bin=58;
      break;
    case 'x':
      bin=45;
      break;
    case 'y':
      bin=61;
      break;
    case 'z':
      bin=53;
      break;
    case ' ':
      bin=0;
      break;
    default:
      bin=0;
      break;
  }
  return bin;
}

int num2bin(int number){
  binario1 = 0;
  binario2 = 0;
  if (number>=32){
    binario1=binario1+1;
    number=number-32;
  }
  binario1=binario1*10;
  if (number>=16){
    binario1=binario1+1;
    number=number-16;
  }
  binario1=binario1*10;
  if (number>=8){
    binario1=binario1+1;
    number=number-8;
  }
  if (number>=4){
    binario2=binario2+1;
    number=number-4;
  }
  binario2=binario2*10;
  if (number>=2){
    binario2=binario2+1;
    number=number-2;
  }
  binario=binario1*100+binario2;
  return binario;
}

int num2binF(int number){
  int binarioLast=0;
  if (number>=1){
    binarioLast=binarioLast+1;
  }
  return binarioLast;
}

void Eficientar(int Ahora12,int Ahora22,int Ahora32,int Ahora42,int Ahora52,int Ahora62,int Antes12,int Antes22,int Antes32,int Antes42,int Antes52,int Antes62){
  if(Ahora12 != Antes12){
    if(Ahora12==1){
      Point1.write(ON123);
    }else{
      Point1.write(OFF123);
    }
  }
  if(Ahora42 != Antes42){
    if(Ahora42==1){
      Point4.write(ON456);
    }else{
      Point4.write(OFF456);
    }
  }
  delay(servozTime);
  if(Ahora22 != Antes22){
    if(Ahora22==1){
      Point2.write(ON123);
    }else{
      Point2.write(OFF123);
    }
  }
  if(Ahora52 != Antes52){
    if(Ahora52==1){
      Point5.write(ON456);
    }else{
      Point5.write(OFF456);
    }
  }
  delay(servozTime);
  if(Ahora32 != Antes32){
    if(Ahora32==1){
      Point3.write(ON123);
    }else{
      Point3.write(OFF123);
    }
  }
  if(Ahora62 != Antes62){
    if(Ahora62==1){
      Point6.write(ON456);
    }else{
      Point6.write(OFF456);
    }
  }
  delay(servozTime);
}
