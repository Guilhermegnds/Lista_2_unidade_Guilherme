#include <stdio.h>
#include <aleatorio.h>

int main(){
    int x;
    srand(time(NULL));
    x=aleatorio(30, 50);
    printf("numero aleatorio = %d\n", x);
    return 0;
}
