#include <stdio.h>

int main() {
    printf("Antes\n");
    goto pula;
    printf("Isso nunca aparece\n");

pula:
    printf("Depois\n");
}
