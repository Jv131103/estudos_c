#define ldrPin 34  		// Pino ADC conectado ao LDR

void setupldr() {
    Serial.begin(9600);  	// Inicia a comunicação serial
}

void loopldr() {
    int ldrValue = analogRead(ldrPin);  // Lê o valor analógico do LDR

    Serial.print("Nível de Luz: ");
    Serial.println(ldrValue);  // Exibe o valor lido no Monitor Serial

    delay(500);  // Pequeno atraso para a próxima leitura
}