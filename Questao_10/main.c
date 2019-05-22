#include <stdio.h>

int main(){
    printf("Digite 10 numeros:\n");
    long int i, num, noInt=0;
    for(i=0; i<=9; i++){
        scanf("%li", &num);

       if((num>=10) && (num<=50)){
           noInt=noInt+1;
       }
    }
    printf("%li numeros estao no intervalo\n", noInt);
}
