#include <ESP32Servo.h>

Servo myServo;  // Cria um objeto Servo

#define servoPin 23  // Pino GPIO conectado ao sinal do servomotor

void setupserv() {
    myServo.attach(servoPin);  // Conecta o servo ao pino especificado
}

void loopserv() {
    for (int angle = 0; angle <= 180; angle += 1) {  // Gira o servo de 0 a 180 graus
        myServo.write(angle);  // Define o ângulo do servo
        delay(15);  // Espera 15 ms para o servo alcançar a posição
    }
    delay(1000);  // Pausa de 1 segundo

    for (int angle = 180; angle >= 0; angle -= 1) {  // Gira o servo de 180 a 0 graus
        myServo.write(angle);  // Define o ângulo do servo
        delay(15);  // Espera 15 ms para o servo alcançar a posição
    }
    delay(1000);  // Pausa de 1 segundo
}