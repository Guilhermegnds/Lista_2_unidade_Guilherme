#include <stdio.h>

int main(){
    int i, resto;
    for (i=0;i<200;i++){
     resto=i%7;
     if(resto == 0){
     printf("%d, ", i);
    }
    }
    printf("\n");
    return 0;
}
