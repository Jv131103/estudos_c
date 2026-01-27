#include <stdio.h>


void calculo(
    int n1,
    int n2,
    int *soma,
    int *multiplicacao,
    int *subtracao,
    double *divisao,
    int *quadrado_primeiro,
    int *cubo_segundo
){
    *soma = n1 + n2;
    *multiplicacao = n1 * n2;
    *subtracao = n1 - n2;
    *quadrado_primeiro = n1 * n1;
    *cubo_segundo = n2 * n2 * n2;  
    if (n2 == 0){
        printf("Erro de divisão por 0\n");
    } else {
        *divisao = (double) n1 / n2;
    }
}

int main(){
    int v1, v2;
    int soma, multiplicacao, subtracao, quadrado_primeiro, cubo_segundo;
    double divisao;

    scanf("%d", &v1);
    scanf("%d", &v2);

    calculo(
        v1,
        v2,
        &soma,
        &multiplicacao,
        &subtracao,
        &divisao,
        &quadrado_primeiro,
        &cubo_segundo
    );

    printf("Soma: %d\n", soma);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Subtracao: %d\n", subtracao);
    printf("Divisao: %.2f\n", divisao);
    printf("Quadrado do primeiro: %d\n", quadrado_primeiro);
    printf("Cubo do segundo: %d\n", cubo_segundo);

    return 0;
}
