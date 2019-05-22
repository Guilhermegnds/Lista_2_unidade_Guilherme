#include <stdio.h>
#include <cf.h>

int main(){
    float c, f;
    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &c);
     f=cf(c);
    printf("%.2f em graus fahrenheit eh %.2f\n", c, f);
    return 0;
}
