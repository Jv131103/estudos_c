#include <stdio.h>

int main(){
    int opcao;

    printf("Digite a opcao de 1 a 7: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Semana não existe\n");
        break;
    }

    return 0;
}
