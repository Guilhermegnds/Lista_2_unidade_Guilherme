#include <stdio.h>

int main(){
    int x, i, total;
    printf("Tabuada do 4: \n");
    for (i=0;i<=10;i++) {
        total=i*4;
        printf("%d x 4 = %d\n", i, total);
    }
    printf("\n");
    return 0;
}
