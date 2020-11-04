//Re-submissão

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LETRAS 26
#define TAMANHO_MAX 10001

typedef struct{
  int frequencia;
  int firstAppearance;
  char letras;
}Dados;

int compareDNA(const void *a, const void *b){
  Dados *p1 = (Dados *)a;
  Dados *p2 = (Dados *)b;

  if(p1->frequencia < p2->frequencia) return +1;
  if(p1->frequencia > p2->frequencia) return -1;
  if(p1->firstAppearance < p2->firstAppearance) return -1;
  if(p1->firstAppearance > p2->firstAppearance) return +1;
  return 0;
}

int main(){
  char genoma[TAMANHO_MAX];
  Dados dna[MAX_LETRAS];

  scanf("%s", genoma);

  for(int i = 0; i < 26; i++){
    dna[i].frequencia = 0;
    dna[i].letras = 'A' + i;
  }

  for(int j = 0; genoma[j]; j++){
    int pos = genoma[j] - 'A';
    if((dna[pos].frequencia) == 0){
      dna[pos].firstAppearance = j;
    }
    dna[pos].frequencia++;
  }

  qsort(dna, MAX_LETRAS, sizeof(Dados), compareDNA);

  for(int k = 0; (dna[k].frequencia) != 0; k++){
    printf("%c %d\n", dna[k].letras, dna[k].frequencia);
  }

  return 0;
}
