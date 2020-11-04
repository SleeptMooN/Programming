#include <stdio.h>

typedef struct{
  int inicio;
  int fim;
  int tamanho;
}Segmento;

int compareSize(const void *a, const void *b){
  Segmento *p1 = (Segmento *)a;
  Segmento *p2 = (Segmento *)b;

  if(p1->inicio > p2->inicio) return +1;
  if(p1->inicio < p2->inicio) return -1;

}

int main(){
  int linesN, size = 0, end = 0;

  scanf("%d", &end);
  scanf("%d", &linesN);

  Segmento v[linesN];

  for(int i = 0; i < linesN; i++){
    scanf("%d %d", &v[i].inicio, &v[i].fim);
    size = v[i].fim - v[i].inicio;
  }

  return 0;
}
