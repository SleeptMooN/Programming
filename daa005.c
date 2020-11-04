#include <stdio.h>
#include <stdlib.h>

//int somaBakugan();

int main(){
  int nBakugan, nFotos, soma = 0;

  scanf("%d", &nBakugan);

  int energy[nBakugan];

  for(int i = 0; i < nBakugan; i++){
    scanf("%d", &energy[i]);
  //  printf("%d \n", energia);
//    energy[i] += energia;
  }

  for(int j = 0; j < nBakugan; j++){
    printf("%d\n", energy[j]);
  }

  scanf("%d", &nFotos);

  int a, b;

  for(int i = 1; i < nFotos + 1; i++){
    scanf("%d %d", &a, &b);
  }

  //printf("%d\n", soma);


  /*for(int i = 1; i < nBakugan; i++){
    for(int j = 1; j < nFotos; j++){

    }
  }*/


  /*int inicio, fim;

  for(int j = 0; j < nFotos; j++){
    scanf("%d %d", &inicio, &fim);
    //for(int k = inicio; k < fim; k++){
    soma = energy[fim] - energy[inicio];
    //printf("%d \n", soma);
    //}
  }*/
  return 0;
}

//int somaBakugan(int valor){

//}
