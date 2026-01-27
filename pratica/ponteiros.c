#include <stdio.h>


void f(int *x) {
    *x = 20;
}


int main(){

    int x = 32;
    printf("Valor de x: %d\n", x);
    printf("Endereço de x na memória: %ld\n", &x);
    printf("Desempacotando o endereço de x na memória: %ld\n", *&x);

    printf("\n");

    int v1; // Declarando uma variável do tipo inteiro
    v1 = 45; // Atribui 45 a v1
    int *ponteiro = &v1; // Declarei o ponteiro e peguei a referencia de memória de v1

    // Posso fazer o que quiser com v1 ou o ponteiro com sua referência
    // Repare que ambos são o mesmo valor por obterem a mesma referência
    v1 += 4;
    printf("v1: %d, ponteiro: %d\n", v1, *ponteiro);
    // Ou
    *ponteiro += 4;
    printf("v1: %d, ponteiro: %d\n", v1, *ponteiro);

    printf("\n");

    int a = 5;
    f(&a);
    printf("%d\n", a);

    return 0;
}
