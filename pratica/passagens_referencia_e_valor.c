#include <stdio.h>


void soma_por_valor(int x);
void soma_por_referencia(int *x);


int main(){
    int a = 10;

    // Valor
    soma_por_valor(a);
    printf("%d\n", a);

    // Referencia
    soma_por_referencia(&a);
    printf("%d\n", a);

    return 0;
}

void soma_por_valor(int x) {
    /*
    A função recebe uma cópia da variável.
    O original não muda.

    O que acontece?

    Na main irá receber um valor
    x recebe cópia de desse valor
    x incrementa 1 a esse valor copiado
    o valor da main continua igual
    */
    x = x + 1;
}

void soma_por_referencia(int *x){
    /*
    A função recebe uma cópia da variável.
    O original não muda.

    O que acontece?

    &<variavel_da_main> → endereço da variável na main
    x aponta para essa variável
    *x acessa o valor dessa variável
    A variável da main é alterada
    */
    *x = *x + 1;
}
