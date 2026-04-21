#define pinPIR 17   	// Pino GPIO conectado ao pino OUT do sensor PIR
#define pinLED 22    	// Pino GPIO conectado ao LED

void setuppir() {
    pinMode(pinPIR, INPUT);    	// Configura o pino do sensor PIR como entrada
    pinMode(pinLED, OUTPUT);   	// Configura o pino do LED como saída
    Serial.begin(9600);       		// Inicia a comunicação serial
}

void looppir() {
    int pirState = digitalRead(pinPIR);  // Lê o estado do sensor PIR

    if (pirState == HIGH) {  // Movimento detectado
        digitalWrite(pinLED, HIGH);  // Liga o LED
        Serial.println("Movimento detectado!");
    } else {  // Nenhum movimento detectado
        digitalWrite(pinLED, LOW);   // Desliga o LED
    }

    delay(100);  // Pequeno atraso para suavizar a leitura
}