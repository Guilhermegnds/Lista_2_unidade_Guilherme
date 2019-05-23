#include <stdio.h>

int main(){
  int x[]={4,5,6,1,9};
  //pode declarar qualquer array em int
  int n=5;
  //n é o número de colunas da matriz
  int max, i, j;
  max = x[0];
  for(i=1; i<n; i++){
    if(x[i] > max){
      max = x[i];
    }
  }

  int plot[max][n];

  for(i=0; i<max; i++){
    for(j=0; j<n; j++){
      plot[i][j]=0;
    }
  }


  for(j=0; j<n; j++){
    // vai desenhando os "1" de
    // baixo para cima na matriz
    for(i=max-1; i>=max-x[j]; i--){
      plot[i][j]=1;
    }
  }

  for(i=0; i<max; i++){
    for(j=0; j<n; j++){
     // printf("%d", plot[i][j]);
    }
    //printf("\n");
  }
 // printf("...\n");
  //Os trechos acima comentados, nas linha 33, 35 e 37
  //permitem a impressão da matriz de forma binaria
  //onde 0 = {nada} & 1 = {*^}

  for(i=0; i<max; i++){
    for(j=0; j<n; j++){
      if(plot[i][j] == 0){
        printf(" ");
      }
      else{
        printf("*");
      }
    }
    printf("\n");
  }


  return 0;
}
