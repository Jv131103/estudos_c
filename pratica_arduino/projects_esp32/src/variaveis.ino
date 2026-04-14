#include <string.h>
#include <string>

void mostrar_variaveis(){
    Serial.begin(115200);
    Serial.println(); // quebra de linha

    int sensorValue = 0;
    float temperature = 23.5;
    char grade = 'A';
    bool isPressed = false;

    // c - string
    char saudacao[15] = "Hey! Como vai?";

    // c++ - string
    String saudacao2 = "Salve!";

    Serial.printf("inteiro: %d", sensorValue);
    Serial.println(); // quebra de linha
    Serial.printf("temperatura: %.1f ", temperature);
    Serial.println(); // quebra de linha
    Serial.printf("char: %c", grade);
    Serial.println(); // quebra de linha
    Serial.println("Hello, ESP32!");

    Serial.printf("string (C TIPO): ");

    int i = 0;
    while (saudacao[i] != '\0'){
        Serial.print(saudacao[i]);
        i++;
    }
    Serial.println(); // quebra de linha
    Serial.printf("string (C++ TIPO): %s", saudacao2); // quebra de linha


    Serial.println(); // quebra de linha
}
