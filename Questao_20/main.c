#include<stdio.h>
#include<primo.h>

int main() {
    int num, fatores;
    printf("Informe um numero: ");
    scanf("%d", &num);
    fatores = primo(num);
    if (fatores == num){
        printf("1");
    }
    printf("\n");
    return 0;
}
