//declaramos el rele
const int rele = 8;

void setup() {
  Serial.begin(9600);
  //indicamos el modo en que actúa el pin del relé
  pinMode(rele, OUTPUT);
}

void loop() {
  //apagamos y encendemos el relé cerrando y abriendo su circuito
  digitalWrite(rele, HIGH);
  delay(2000);
  digitalWrite(rele, LOW);
  delay(2000);
}
