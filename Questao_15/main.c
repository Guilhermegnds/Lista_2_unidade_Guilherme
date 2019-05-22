#include <stdio.h>
#include <string.h>

int main()
{  char nome[100];
    int i, num=0;
    printf("Digite um texto:\n");
    fgets(nome, 100, stdin);

    for (i=0;i<(strlen(nome)-1);i++) {
        if(nome[i] == 97 || nome[i] == 65){
            num = num+1;
        }
       }
    printf("\nQuantidade de caracteres a: %d\n\n", num);
    return 0;
}
