#include <stdio.h>

int main(){
    int x, i, resto, ver=0;
    printf("Informe um numero: ");
    scanf("%d", &x);

    for (i=2;i<=x;i++) {
        resto=x%i;
        if (resto == 0){
            ver=ver+1;
        }
    }
    if(ver<=1){
    printf("%d eh primo\n", x);
    }
    else{
    printf("%d nao eh primo\n", x);
    }

    return 0;
}
