#include <stdio.h>

int main(){
    double n1, n2, n3, n4;

    printf("N1: ");
    scanf("%lf", &n1);

    printf("N2: ");
    scanf("%lf", &n2);

    printf("N3: ");
    scanf("%lf", &n3);

    printf("N4: ");
    scanf("%lf", &n4);

    double media = (n1 + n2 + n3 + n4) / 4;


    printf("Média: %.2lf\n", media);
    return 0;
}