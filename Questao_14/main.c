#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, a=0;
srand(time(NULL));
 do{
        num = 1000 + rand() % 999;
        if (num%11 == 5){
            a=a+1;
            printf("%d, ", num);
        }
}while(a<20);
printf("\n");
    return 0;
}
