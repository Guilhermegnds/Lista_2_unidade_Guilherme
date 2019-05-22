#include <stdio.h>

int main(){
    int i, soma;
    soma=0;
    for (i=0;i<=100;i++) {
        soma=soma+i;
    }
    printf("A soma dos 100 primeiros numeros naturais eh %d\n", soma);
    return 0;
}
