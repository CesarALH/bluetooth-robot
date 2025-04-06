#define MOTOR_PIN1 8
#define MOTOR_PIN2 9
#define MOTOR_PIN3 10
#define MOTOR_PIN4 11
char instruccion;

void setup() {
   // Inicialización de la comunicación serial para Bluetooth
  Serial.begin(9600);
  
  // Configuración de pines para el motor
  pinMode(MOTOR_PIN1, OUTPUT);
  pinMode(MOTOR_PIN2, OUTPUT);
  pinMode(MOTOR_PIN3, OUTPUT);
  pinMode(MOTOR_PIN4, OUTPUT);
 
}
void loop() {

  if (Serial.available()) {
    instruccion = Serial.read();
    
    // Movimiento hacia adelante
    if (instruccion == "A" ) {
      Serial.print("ok");
      /*digitalWrite(MOTOR_PIN1, HIGH);
      digitalWrite(MOTOR_PIN2, LOW);
      digitalWrite(MOTOR_PIN3, HIGH);
      digitalWrite(MOTOR_PIN4, LOW);*/

    }
    // Movimiento hacia atrás
    if (instruccion == "B") {
      digitalWrite(MOTOR_PIN1, LOW);
      digitalWrite(MOTOR_PIN2, HIGH);
      digitalWrite(MOTOR_PIN3, LOW);
      digitalWrite(MOTOR_PIN4, HIGH);
    }
    // Movimiento hacia la izquierda
    if (instruccion == "I") {
      digitalWrite(MOTOR_PIN1, HIGH);
      digitalWrite(MOTOR_PIN2, LOW);
      digitalWrite(MOTOR_PIN3, LOW);
      digitalWrite(MOTOR_PIN4, HIGH);
    }
    // Movimiento hacia la derecha
    if (instruccion == "D") {
      digitalWrite(MOTOR_PIN1, LOW);
      digitalWrite(MOTOR_PIN2, HIGH);
      digitalWrite(MOTOR_PIN3, HIGH);
      digitalWrite(MOTOR_PIN4, LOW);
    }
  }
}









