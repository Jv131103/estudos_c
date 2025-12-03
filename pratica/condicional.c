#include <stdio.h>


int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade é %d anos\n", idade);

    if (idade >= 18){
        printf("Você é maior de idade\n");
    } else if (idade < 18 && idade >= 15){
        printf("Você é adolescente e menor de idade\n");
    } else{
        printf("Você é menor de idade\n");
    }

    return 0;
}
