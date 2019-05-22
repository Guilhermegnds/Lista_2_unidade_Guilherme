#include <stdio.h>

int main(){
    //a=Primeiro termo, b=Segundo termo, c=terceiro em diante//
    int a, b, c, ordem=2;
    long int i;
    a=0;
    b=1;
    printf("Informe quantos numeros da sequencia de fibonacci vc quer saber: ");
    scanf("%ld", &i);
    //i não pode ser menor que 3, pois os 2 primeiros termos
    //ja foram dados.
    printf("%d, %d, ", a, b);
    while (ordem < i){
         c=a+b;
         a=b;
         b=c;
         ordem=ordem+1;
         if(ordem < i){
             printf("%ld, ", c);
           }
         if (ordem == i){
           printf("%ld.\n", c);
         }
}

    return 0;
}
