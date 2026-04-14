#include <iostream>
#include <thread>
#include <chrono>


void digitalWrite(int estado) {
    std::cout << (estado ? "LED ON" : "LED OFF") << std::endl;
}

void setup(int estado){
    if (estado % 2 == 0){
        digitalWrite(1);
        std::cout << "Led Ligado" << std::endl;
    } else {
        digitalWrite(0);
        std::cout << "Led Desligado" << std::endl;
    }
}

int main(){
    int interruptor;
    
    // ímpares = desligado, pares = ligado
    printf("Status do interruptor: ");
    scanf("%d", &interruptor);

    setup(interruptor);
}
