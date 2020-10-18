#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int geracoes(char matriculas[]);
int solve(char matriculas[]);

int main(){
  int casos;

  scanf("%d", &casos);

  char matriculas[casos][9];
  char matriculas2[casos][9];

  for(int i = 0; i < casos; i++){
    scanf("%s %s", matriculas[i], matriculas2[i]);
    printf("%d\n", abs(solve(matriculas2[i]) - solve(matriculas[i])));
  }
  return 0;
}

int geracoes(char matriculas[]){
  int sum = 5290000;

 if(isalpha(matriculas[0]) && isdigit(matriculas[7])){
    return 0;
  }
  if(isdigit(matriculas[0]) && isalpha(matriculas[7])){
    return sum;
  }
  if(isdigit(matriculas[0]) && isdigit(matriculas[7])){
    return 2 * sum;
  }
  if(isalpha(matriculas[0]) && isalpha(matriculas[7])){
    return 3 * sum;
  }
  return -1;
}

int solve(char matriculas[]){
  int base = 1;
  int resposta = geracoes(matriculas);

  for(int i = 7; i >= 0; i--){
    if(isdigit(matriculas[i])){
      resposta += (matriculas[i] - '0')  * base;
      base *= 10;
    }
  }

  for(int i = 7; i >= 0; i--){
    if(isalpha(matriculas[i])){
      int value = matriculas[i] - 'A';
      if(matriculas[i] > 'K'){
        value--;
      }
      if(matriculas[i] > 'W'){
        value--;
      }
      if(matriculas[i] > 'Y'){
        value--;
      }
      resposta += value * base;
      base *= 23;
    }
  }
  return resposta;
}
