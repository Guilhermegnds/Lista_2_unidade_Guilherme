#include <stdio.h>

int main(){
    int x, i, fatorial;
    printf("Digite um numero qualquer: ");
    scanf("%d", &x);
    fatorial=1;
    for (i=1;i<=x;i++) {
        fatorial=i*fatorial;
    }
    printf("%d! = %d ", x, fatorial);
    return 0;
}
