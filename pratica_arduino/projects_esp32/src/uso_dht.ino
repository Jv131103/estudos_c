#include <DHT.h> 		//precisa incluir essa biblioteca no seu projeto para que o sensor funcione.

#define pinoDHT 23     		//Pino onde o sensor está conectado
#define modelo DHT22   	//Tipo de sensor DHT22

DHT dht(pinoDHT, modelo);

void config_setup_dht() {
    Serial.begin(9600);
    dht.begin();
}

void config_loop_dht() {
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    if (isnan(h) || isnan(t)) {
        Serial.println("Falha ao ler do sensor DHT!");
        return;
    }

    Serial.print("Umidade: ");
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("Temperatura: ");
    Serial.print(t);
    Serial.println(" *C");

    if (t > 30.0) {
        Serial.println("Alerta: Temperatura alta!");
    } else {
        Serial.println("Temperatura dentro do normal.");
    }

    delay(2000);  		//Aguarda 2 segundos antes de ler novamente
}