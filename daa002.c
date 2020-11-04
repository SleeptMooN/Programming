#include <stdio.h>

int main() {
  int n, numfixo, num, wanted;
  scanf("%d", &n);
  int numeros[n];

  for(int i = 0; i < n; i++){

    scanf("%d %d", &num, &wanted);

    numfixo = num;

    int soma = 0, unico;

    while(soma != wanted){
      numfixo++;
      num = numfixo;
      soma = 0;

      while(num != 0){
        unico = num%10;
        num = num/10;
        soma += unico;
      }
    }
    numeros[i] = numfixo;
  }

  for(int i = 0; i < n; i++){
    printf("%d\n", numeros[i]);
  }
  return 0;
}
