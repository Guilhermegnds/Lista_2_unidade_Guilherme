#include <stdio.h>

int main(){
    int y,  i, total;
    printf("Digite um numero: ");
    scanf("%d", &y);
    printf("Tabuada do %d\n", y);
    for (i=0;i<=10;i++) {
        total=i*y;
        printf("%d x %d = %d\n", i, y, total);
    }
    printf("\n");
    return 0;
}
