#define buzzerPin 15  // Pino GPIO conectado ao buzzer

void setupbuzz() {
    pinMode(buzzerPin, OUTPUT);  // Configura o pino do buzzer como saída
}

void loopbuzz() {
    tone(buzzerPin, 1000);  	// Emite um som de 1000 Hz (1 kHz)
    delay(500);             		// Aguarda meio segundo
    noTone(buzzerPin);      	// Para o som
    delay(500);             		// Pausa antes do próximo som

    tone(buzzerPin, 1500);  	// Emite um som de 1500 Hz
    delay(500);
    noTone(buzzerPin);
    delay(500);
    tone(buzzerPin, 2000);  	// Emite um som de 2000 Hz
    delay(500);
    noTone(buzzerPin);
    delay(500);
}