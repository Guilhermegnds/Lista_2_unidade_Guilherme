#include <stdio.h>

void reverse (char normal []){
    int b, i;
    b = strlen(normal);
   char guarda[b];
    for (i=0; i<b; i++){
        guarda[i] = normal[i];
}
    for (i=0; i<b; i++){
        normal[i] = guarda[b-1-i];
}
    normal[b] = 0;
}


int main (){
    char nome[] = "Francisco jose";
    puts(nome);
    reverse(nome);
    puts(nome);
}
