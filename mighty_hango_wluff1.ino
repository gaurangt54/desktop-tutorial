int A=13;
int B=12;
int C=11;
int D=7;
int E=10;
int F=9;
int G=8;
int R=6;
int Y=5;
int H=4;
int E1=A0;
int T1=A1;
int E2=A2;
int T2=A3;
int E3=A4;
int T3=A5;
long DR1;
long DR2;
long DR3;
int DT1;
int DT2;
int DT3;
int a=2; 
int b=3;
int W=1;
int flag=0;
void setup() {
  // put your setup code here, to run once:


pinMode(T1,OUTPUT);
pinMode(T2,OUTPUT);
pinMode(E1,INPUT);
pinMode(E2,INPUT);
pinMode(T3,OUTPUT);
pinMode(E3,INPUT);
pinMode(a,OUTPUT); 
pinMode(b,OUTPUT); 
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(E,OUTPUT);
pinMode(F,OUTPUT);
pinMode(G,OUTPUT);
pinMode(R,OUTPUT);
pinMode(Y,OUTPUT);
pinMode(H,OUTPUT);
pinMode(W,OUTPUT);
}

void loop() {

  
delay(1000);

//US1
digitalWrite(T1, LOW);
delayMicroseconds(2);
digitalWrite(T1, HIGH);
delayMicroseconds(10);
digitalWrite(T1, LOW);
DR1 = pulseIn(E1, HIGH);
DT1= DR1*0.034/2;
//US1

//US2
digitalWrite(T2, LOW);
delayMicroseconds(2);
digitalWrite(T2, HIGH);
delayMicroseconds(10);
digitalWrite(T2, LOW);
DR2 = pulseIn(E2, HIGH);
DT2= DR2*0.034/2;
//US2
  
//US3
digitalWrite(T3, LOW);
delayMicroseconds(2);
digitalWrite(T3, HIGH);
delayMicroseconds(10);
digitalWrite(T3, LOW);
DR3 = pulseIn(E3, HIGH);
DT3= DR3*0.034/2;
//US3

if(DT3>34)
  digitalWrite(W,HIGH);
  
// Main
if(DT3<34)
{
digitalWrite(W,LOW);
//Hey!
//H
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(H,HIGH);

delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(H,LOW);
  delay(200);

//E
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(Y,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(Y,LOW);
  delay(200);

//Y
digitalWrite(G,HIGH);
digitalWrite(B,HIGH);
digitalWrite(F,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(R,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
  delay(200);

//Hey!
delay(2000);

if(DT1>34&&DT2>34)
{
//2
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(D,HIGH);
digitalWrite(G,HIGH);
digitalWrite(E,HIGH);

delay(3000);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(R,LOW);
digitalWrite(Y,HIGH);
delay(500);

digitalWrite(Y,LOW);
digitalWrite(H,HIGH);
//Open 2
for(int i=0;i<5;i++)
{
if(i==0)
{  
digitalWrite(G,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
}
if(i==1)
{
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
}
if(i==2)
{
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
}

if(i>2)
{
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
digitalWrite(G,HIGH);
}

if(i<2)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
  }
  else
  {
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
  } 

delay(400);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(200);
}
  
for(int i=0;i<5;i++)
{
digitalWrite(W,HIGH); 
delay(500);
}
  
digitalWrite(W,LOW); 
digitalWrite(H,LOW);
digitalWrite(Y,HIGH);
delay(1250);
digitalWrite(Y,LOW);
digitalWrite(R,HIGH);

//Close 2
for(int i=0;i<5;i++)
{

if(i==0)
{  
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
}
if(i==1)
{

digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
}
if(i==2)
{
digitalWrite(G,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
}

if(i==3)
{
digitalWrite(A,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
}


if(i==4)
{
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(G,HIGH);
}

if(i<2)
  {
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
  }
  else
  {
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
  } 
delay(400);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(200);
}
delay(1250);
}

if((DT1>34&&DT2<34)||(DT1<34&&DT2>34))
{
  //1
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
delay(2000);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(R,LOW);
digitalWrite(Y,HIGH);
delay(500);

digitalWrite(Y,LOW);
digitalWrite(H,HIGH);


//Open 1
for(int i=0;i<5;i++)
{
if(i==0)
{  
digitalWrite(G,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
}
if(i==1)
{
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
}
if(i==2)
{
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
}

if(i>2)
{
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
digitalWrite(G,HIGH);
}

if(i<2)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
  }
  else
  {
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
  } 

delay(400);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(200);
}
  
for(int i=0;i<5;i++)
{
digitalWrite(W,HIGH); 
delay(500);
}
  
  
digitalWrite(W,LOW);
digitalWrite(H,LOW);
digitalWrite(Y,HIGH);
delay(1250);
digitalWrite(Y,LOW);
digitalWrite(R,HIGH);

//Close 1
for(int i=0;i<5;i++)
{

if(i==0)
{  
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
}
if(i==1)
{

digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
}
if(i==2)
{
digitalWrite(G,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
}

if(i==3)
{
digitalWrite(A,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
}


if(i==4)
{
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(G,HIGH);
}

if(i<2)
  {
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
  }
  else
  {
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
  } 
delay(400);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(200);
}
delay(1250);
}

if(DT1<34&&DT2<34)
{
  //0
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(R,HIGH);
delay(2000);
digitalWrite(G,LOW);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(Y,HIGH);

delay(500);
digitalWrite(Y,LOW);
//Full
for(int i=0;i<4;i++)
{
digitalWrite(R,HIGH);
if(i==0)
{  
digitalWrite(A,HIGH);
digitalWrite(G,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);

}
if(i==1)
{
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
}
if(i==2)
{
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
}

if(i==3)
{
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
}


delay(400);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(R,LOW);
delay(200);
}
digitalWrite(W,HIGH);  
delay(2500);
digitalWrite(W,LOW);

}
}
}