#include <stdio.h>
#include <fc.h>

int main(){
    float c, f;
    printf("Informe a temperatura em graus fahrenheit: ");
    scanf("%f", &f);
    c=fc(f);
    printf("%.2f em graus celsius eh %.2f\n", f, c);
    return 0;
}
