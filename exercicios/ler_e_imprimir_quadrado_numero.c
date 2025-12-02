#include <stdio.h>

int main(){
    int numero;

    printf("NUMERO: ");
    scanf("%d", &numero);

    int quadrado = numero * numero;

    printf("Quadrado(%d) = %d\n", numero, quadrado);
}
