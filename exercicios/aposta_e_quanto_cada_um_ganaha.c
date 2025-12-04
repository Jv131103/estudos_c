#include <stdio.h>

int main() {
    double valor1, valor2, valor3, valor_premio;

    printf("Valor do 1° amigo: ");
    scanf("%lf", &valor1);

    printf("Valor do 2° amigo: ");
    scanf("%lf", &valor2);

    printf("Valor do 3° amigo: ");
    scanf("%lf", &valor3);

    printf("Valor do Prêmio: ");
    scanf("%lf", &valor_premio);

    double total_investido = valor1 + valor2 + valor3;

    double ganho1 = (valor1 / total_investido) * valor_premio;
    double ganho2 = (valor2 / total_investido) * valor_premio;
    double ganho3 = (valor3 / total_investido) * valor_premio;

    printf("\n--- RESULTADO ---\n");
    printf("Amigo 1 recebe: R$ %.2f\n", ganho1);
    printf("Amigo 2 recebe: R$ %.2f\n", ganho2);
    printf("Amigo 3 recebe: R$ %.2f\n", ganho3);

    return 0;
}
