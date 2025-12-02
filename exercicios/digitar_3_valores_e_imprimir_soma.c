#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);

    int soma = n1 + n2 + n3;
    printf("%d + %d + %d = %d\n", n1, n2, n3, soma);

    return 0;
}
