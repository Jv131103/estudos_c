#define buttonPin 22  // Pino GPIO conectado ao push button
#define ledPin 17      // Pino GPIO conectado ao LED (ou outro dispositivo)

void setup_pushbtn() {
    pinMode(buttonPin, INPUT_PULLUP);  // Configura o pino do botão como entrada com pull-up interno
    pinMode(ledPin, OUTPUT);           // Configura o pino do LED como saída
    Serial.begin(9600);                // Inicia a comunicação serial
}

void loop_pushtbn() {
    int buttonState = digitalRead(buttonPin);  // Lê o estado do botão

    if (buttonState == LOW) {  // O botão está pressionado (pino conectado ao GND)
        digitalWrite(ledPin, HIGH);  // Liga o LED
        Serial.println("Botão pressionado!");
    } else {  // O botão não está pressionado (pino em estado HIGH)
        digitalWrite(ledPin, LOW);   // Desliga o LED
    }

    delay(50);  // Pequeno atraso para evitar ruído de contato (debounce)
}
