/*
Codigo Motor 
Pin GND   gnd
Pin PWM   Pin 3 
Pin Dir   Pin 2

*/

#define pwm 3
#define dir 2

int velS=200; //Velocidad subida
int velB=200; //Velocidad bajada

void setup() {                

  pinMode(pwm,OUTPUT);
  pinMode(dir,OUTPUT);
  Serial.begin(9600);
}


void loop() {
 
  Serial.println("BAJANDO");
  bajar(2000);
  delay(5000);  
  Serial.println("SUBIENDO");
  subir(2000);
  delay(5000);  
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
