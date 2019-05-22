#include <stdio.h>

int main(){
    int i, resto;
    printf("Todos os multiplos de 4 menores que 100: ");
    for (i=0;i<100;i++){
        resto=i%4;
        if(resto == 0){
        printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}
