 ./*
Codigo Motor 
Pin GND   gnd
Pin PWM   Pin 3 
Pin Dir   Pin 2

*/

#define pwm 3
#define dir 2

int velS=100; //Velocidad subida
int velB=100; //Velocidad bajada

void setup() {                

  pinMode(pwm,OUTPUT);
  pinMode(dir,OUTPUT);
  Serial.begin(9600);
}


void loop() {
  
  bajar(1000);
  delay(2000);  
  subir(1000);
  delay(2000);  
}

void bajar(int x){
digitalWrite(dir,LOW);
analogWrite(pwm,velB);
delay(x);
}

void subir(int x){
  digitalWrite(dir,HIGH);  
  analogWrite(pwm,velS);
  delay(x);
}
