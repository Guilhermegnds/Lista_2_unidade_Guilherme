#include <stdio.h>
#include <string.h>

int main(){
    char nome[1000];
    int tamanho, i;
    int caracteres=0, palavras=1;
    fgets(nome,1000,stdin);

    tamanho = strlen(nome);
    nome[tamanho-1] = 0;
    tamanho = strlen(nome);
    for(i=0; i<tamanho; i++){
        if(nome[i] != ' '){
            caracteres++;
        }
    }
    printf("%d caracteres, ", caracteres);

    for(i=0; i<tamanho; i++){
        if(nome[i] == ' ' && nome[i-1] != ' '){
            palavras++;
        }
    }
    if(nome[tamanho-1] == ' '){
        palavras--;
    }
    printf("%d palavras\n", palavras);

    return 0;
}
