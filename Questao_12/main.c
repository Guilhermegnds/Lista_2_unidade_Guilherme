#include<stdio.h>

int main() {
    int num, i, b;
    int guarda=0, guarda2=0, ordem=0;
    int dif = 0;
    num=2;
    do{
        b=0;
        for (i = 2; i <= num; i++) {

            if (num%i == 0){
                b=b+1;
            }
        }
        if ((b<=1)){
            ordem=ordem+1;
            if (ordem == 6){
                guarda = num;
            }
            if (ordem == 12){
                guarda2 = num;
            }
        }
        num = num+1;

    }while(ordem < 12);
    dif = guarda2 - guarda;
    printf("Diferenca = %d\n", dif);
    return 0;
}


//  int guarda=0, guarda2=0, ordem=0;
