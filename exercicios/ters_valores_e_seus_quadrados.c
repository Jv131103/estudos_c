#include <stdio.h>

int main(){
    int n1, n2, n3, soma;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);

    printf("Quadrado de %d: %d\n", n1, n1 * n1);
    printf("Quadrado de %d: %d\n", n2, n2 * n2);
    printf("Quadrado de %d: %d\n", n3, n3 * n3);

    soma = n1 * n1 + n2 * n2 + n3 * n3;
    printf("Soma do quadrados: %d\n", soma);
}
