#include <iostream>
#include <thread>
#include <chrono>

bool LED;

void digitalWrite(int estado) {
    std::cout << (estado ? "LED ON" : "LED OFF") << std::endl;
}

void delay(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

int main() {
    while (true) {
        digitalWrite(1);
        LED = true;

        if (LED) {
            std::cout << "!!! LED LIGADO !!!" << std::endl;
        }

        delay(1000);

        digitalWrite(0);
        LED = false;

        std::cout << "!!! LED DESLIGADO !!!" << std::endl;

        delay(1000);
    }
}

// Para compilar C++ FAÇA: Substitua teste pelo nome do arquivo
// g++ teste.cpp -o teste
