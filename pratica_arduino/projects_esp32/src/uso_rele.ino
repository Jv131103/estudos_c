int relePin = 23;  
bool releState = false;

// setup
void config_setup() {
  pinMode(relePin, OUTPUT);
  digitalWrite(relePin, HIGH); // começa desligado
}

// loop
void config_loop() {
  if (releState) {
    digitalWrite(relePin, LOW);   // liga o relé
  } else {
    digitalWrite(relePin, HIGH);  // desliga o relé
  }

  delay(2000);

  releState = !releState;
}
