#include <stdio.h>
#include <stdlib.h>

int compareSomas(const void *a, const void *b){
  int i1 = *((int *)a);
  int i2 = *((int *)b);

  if (i1 < i2) return -1;
  if (i1 > i2) return +1;
  return 0;
}

int main(){
  int n, q, soma = 0;

  scanf("%d", &n);

  int numbers[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &numbers[i]);
  }

  scanf("%d", &q);

  int query[q];

  for(int i = 0; i < q; i++){
    scanf("%d", &query[i]);
  }

  int somas[n];

  qsort(numbers, n, sizeof(int), compareSomas);

  for(int i = 0; i <= 0; i++){
    for(int j = 0; j <= n - 1; j++){
      soma = numbers[i] + numbers[j];
      somas[i] = soma;
    }
  }

  qsort(somas, n, sizeof(int), compareSomas);


  for(int i = 0; i < n; i++){
    printf("Numbers: %d\n", numbers[i]);
    printf("Somas: %d\n", soma);
  }

  return 0;
}
