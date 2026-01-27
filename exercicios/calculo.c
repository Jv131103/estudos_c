#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct{
    float a;
    float b;
} valores;

float calculo(float a, float b){
    return (a + sqrt(a)) / (b + sqrt(b));
}

int main(){
    valores valor;

    printf("Digite o valor de a: ");
    fflush(stdout);
    scanf("%f", &valor.a);

    printf("Digite o valor de b: ");
    fflush(stdout);
    scanf("%f", &valor.b);

    if (valor.a < 0 || valor.b < 0) {
        printf("Erro: a e b devem ser >= 0 para calcular raiz quadrada.\n");
        return 1;
    }

    float denom = valor.b + sqrtf(valor.b);
    if (denom == 0.0f) {
        printf("Erro: denominador zero.\n");
        return 1;
    }

    float resultado = calculo(valor.a, valor.b);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
