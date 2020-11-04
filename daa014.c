#include <stdio.h>

typedef struct{
  int duracao;
  int multa;
}Encomenda;


int main(){
  int quantidade;

  scanf("%d", &quantidade);

  Encomenda n[quantidade];

  for(int i = 0; i < quantidade; i++){
    scanf("%d %d", &n[i].duracao, &n[i].multa);
  }

  return 0;
}
