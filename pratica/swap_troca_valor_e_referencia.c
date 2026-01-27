#include <stdio.h>

// Não funciona
void troca_por_valor(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

// Correto
void troca_por_referencia(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int x = 3, y = 5;
    troca_por_referencia(&x, &y);

    printf("x=%d, y=%d\n", x, y);

    return 0;
}
