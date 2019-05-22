#include <stdio.h>
#include <string.h>

void reverso (char normal [], char reverso[]){
 int b, i;
 b = strlen(normal);
 for (i=0; i<b; i++){
     reverso[i] = normal[b-1-i];
 }
 reverso[b] = 0;
}

int main(){
    char ent[100], saida[100];
    int b;
    printf("Digite um texto:\n");
    fgets(ent, 100, stdin);
    b = strlen(ent);
    reverso(ent, saida);
    printf("Inverso desse texto:\n");
    puts(saida);
    return 0;
}
