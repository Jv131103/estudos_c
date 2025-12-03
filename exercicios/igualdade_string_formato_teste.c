#include <stdio.h>


int main(){
    char s1[] = "oip";
    char s2[] = "oil";

    for (int i=0; i < 3; i++){
        if (s1[i] != s2[i]){
            printf("Diferentes\n");
            return 1;
        }
    }
    printf("Iguais\n");
    return 0;
}
