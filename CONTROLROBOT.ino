#define BOTON_ADELANTE 3
#define BOTON_ATRAS 4
#define BOTON_IZQUIERDA 5
#define BOTON_DERECHA 6


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

pinMode(BOTON_ADELANTE, INPUT_PULLUP);
pinMode(BOTON_ATRAS, INPUT_PULLUP);
pinMode(BOTON_IZQUIERDA, INPUT_PULLUP);
pinMode(BOTON_DERECHA, INPUT_PULLUP);

}

void loop() {
  
  // put your main code here, to run repeatedly:
if(!digitalRead(BOTON_ADELANTE)){
  Serial.print("A");
}
if(!digitalRead(BOTON_ATRAS)){
  Serial.print("B");
}
if(!digitalRead(BOTON_IZQUIERDA)){
  Serial.print("I");
}
if(!digitalRead(BOTON_DERECHA)){
  Serial.print("D");
}

}
