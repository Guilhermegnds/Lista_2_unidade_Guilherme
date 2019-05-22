#include <stdio.h>
#include <stdlib.h>

int aleatorio(int a, int b){
    int x;
    x = a + rand() % (b-a);
    return x;
}
