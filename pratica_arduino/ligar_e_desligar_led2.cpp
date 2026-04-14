#include <iostream>
#include <thread>
#include <chrono>

int estado = 0; // 0 = desligado, 1 = ligado
int qtd_vezes_ligado = 0;


    void digitalWrite(int estado) {
        std::cout << (estado ? "LED ON" : "LED OFF") << std::endl;
    }

void delay(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

int often_connect(int cont) {
    if (cont == 3) {
        std::cout << "!!! LED MUITAS VEZES LIGADO !!!" << std::endl;
        return 1;
    }
    return 0;
}

int main(){
    while (true) {
        if (!estado){
            digitalWrite(1);
            estado = 1;
            qtd_vezes_ligado += 1;
            std::cout << "!!! LED LIGADO !!!" << std::endl;
        } else {
            digitalWrite(0);
            estado = 0;
            std::cout << "!!! LED DESLIGADO !!!" << std::endl;
            if (often_connect(qtd_vezes_ligado)){
                break;
            }
        }
        delay(1000);
    }
}
