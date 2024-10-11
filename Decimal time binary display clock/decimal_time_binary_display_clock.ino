// C++ code

const int s1=0;
const int s2=1;
const int s4=2;
const int s8=3;
const int s16=4;
const int s32=5;
const int s64=6;

const int m1=7;
const int m2=8;
const int m4=9;
const int m8=10;
const int m16=11;
const int m32=12;
const int m64=13;

const int h1=A1;
const int h2=A2;
const int h4=A3;
const int h8=A4;

int seconds=0;
int minutes=0;
int hours=0;

void setup()
{
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s4, OUTPUT);   
  pinMode(s8, OUTPUT);
  pinMode(s16, OUTPUT);
  pinMode(s32, OUTPUT);
  pinMode(s64, OUTPUT);

  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m4, OUTPUT);   
  pinMode(m8, OUTPUT);
  pinMode(m16, OUTPUT);
  pinMode(m32, OUTPUT);
  pinMode(m64, OUTPUT);
  
  pinMode(h1, OUTPUT);
  pinMode(h2, OUTPUT);
  pinMode(h4, OUTPUT);   
  pinMode(h8, OUTPUT);

}

void loop()
{ 
  // SECONDS

  int sec1=seconds%2;
  int secondsb10=seconds/2;
  int sec2=secondsb10%2;
  secondsb10=secondsb10/2;
  int sec4=secondsb10%2;
  secondsb10=secondsb10/2;
  int sec8=secondsb10%2;
  secondsb10=secondsb10/2;
  int sec16=secondsb10%2;
  secondsb10=secondsb10/2;
  int sec32=secondsb10%2;
  secondsb10=secondsb10/2;
  int sec64=secondsb10%2;
  
  if (sec1==1){
  	digitalWrite(s1, HIGH);
  }else{
    digitalWrite(s1, LOW);
  }
  if (sec2==1){
  	digitalWrite(s2, HIGH);
  }else{
    digitalWrite(s2, LOW);
  }
  if (sec4==1){
  	digitalWrite(s4, HIGH);
  }else{
    digitalWrite(s4, LOW);
  }
  if (sec8==1){
  	digitalWrite(s8, HIGH);
  }else{
    digitalWrite(s8, LOW);
  }
  if (sec16==1){
  	digitalWrite(s16, HIGH);
  }else{
    digitalWrite(s16, LOW);
  }
  if (sec32==1){
  	digitalWrite(s32, HIGH);
  }else{
    digitalWrite(s32, LOW);
  }
  if (sec64==1){
  	digitalWrite(s64, HIGH);
  }else{
    digitalWrite(s64, LOW);
  }
  
  
  // MINUTES

  int min1=minutes%2;
  int minutesb10=minutes/2;
  int min2=minutesb10%2;
  minutesb10=minutesb10/2;
  int min4=minutesb10%2;
  minutesb10=minutesb10/2;
  int min8=minutesb10%2;
  minutesb10=minutesb10/2;
  int min16=minutesb10%2;
  minutesb10=minutesb10/2;
  int min32=minutesb10%2;
  minutesb10=minutesb10/2;
  int min64=minutesb10%2;
  
  if (min1==1){
  	digitalWrite(m1, HIGH);
  }else{
    digitalWrite(m1, LOW);
  }
  if (min2==1){
  	digitalWrite(m2, HIGH);
  }else{
    digitalWrite(m2, LOW);
  }
  if (min4==1){
  	digitalWrite(m4, HIGH);
  }else{
    digitalWrite(m4, LOW);
  }
  if (min8==1){
  	digitalWrite(m8, HIGH);
  }else{
    digitalWrite(m8, LOW);
  }
  if (min16==1){
  	digitalWrite(m16, HIGH);
  }else{
    digitalWrite(m16, LOW);
  }
  if (min32==1){
  	digitalWrite(m32, HIGH);
  }else{
    digitalWrite(m32, LOW);
  }
  if (min64==1){
  	digitalWrite(m64, HIGH);
  }else{
    digitalWrite(m64, LOW);
  }
  
  
  // HOURS

  int hr1=hours%2;
  int hoursb10=hours/2;
  int hr2=hoursb10%2;
  hoursb10=hoursb10/2;
  int hr4=hoursb10%2;
  hoursb10=hoursb10/2;
  int hr8=hoursb10%2;
  
  if (hr1==1){
  	digitalWrite(h1, HIGH);
  }else{
    digitalWrite(h1, LOW);
  }
  if (hr2==1){
  	digitalWrite(h2, HIGH);
  }else{
    digitalWrite(h2, LOW);
  }
  if (hr4==1){
  	digitalWrite(h4, HIGH);
  }else{
    digitalWrite(h4, LOW);
  }
  if (hr8==1){
  	digitalWrite(h8, HIGH);
  }else{
    digitalWrite(h8, LOW);
  }
  
  seconds++;
  if (seconds==100){
  	seconds=0;
    minutes++;
  }
  if (minutes==100){
  	minutes=0;
    hours++;
  }
  if (hours==10){
  	hours=0;
  }
  
  delay(864); // 1 decimal second = 0,864 SI second 
}
