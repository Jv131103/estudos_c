#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){

    int fat;

    while (true){
        printf("Digite um número: ");
        fflush(stdout);
        scanf("%d", &fat);

        if (fat < 0){
            printf("Valor precisa ser maior que 0");
            continue;
        }

        break;
    }

    if (fat == 1 || fat == 0){
        printf("Fatorial de %d é 1\n", fat);
        return 1;
    }

    int mult = 1;

    for (int i=fat; i > 1; i--){
        printf("%d x ", i);
        mult *= i;
    }
    printf("1 = %d\n", mult);

    return 0;
}
