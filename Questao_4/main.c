#include <stdio.h>

int main(){
    int x, i,resto;
    printf("Digite um numero qualquer: ");
    scanf("%d", &x);
    printf("Seus divisores sao: ");
    for (i=1;i<=x;i++) {
        resto=x%i;
        if(resto == 0){
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}
