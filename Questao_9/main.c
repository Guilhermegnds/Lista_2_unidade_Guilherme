#include <stdio.h>

int main(){
    int i, soma=0, media, gv=0;
    for (i=13;i<=73;i++) {
        if(i%2 ==0){
        soma=soma+i;
        gv=gv+1;
        }
    }
    media = soma/gv;
    printf("A media eh %d\n\n", media);
    return 0;
}
