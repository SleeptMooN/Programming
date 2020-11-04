#include<stdio.h>
#include<stdlib.h>

void sums(int *lista,int *size){
	for(int i = 1; i < *size; i++){
		lista[i] += lista[i-1];
	}
}

int main(){
	int nBakugan, cases;

	scanf("%d", &nBakugan);

	int lista[nBakugan];

	for (int i = 0; i < nBakugan; i++) {
		scanf("%d", &lista[i]);
	}

	sums(lista, &nBakugan);

	scanf("%d", &cases);

	int a, b;

	for (int i = 0; i < cases; i++) {
		scanf("%d %d", &a, &b);

		if(a == 1){
			printf("%d\n", lista[b - 1]);
		}else printf("%d\n", lista[b - 1] - lista[a - 2]);
	}
	
	return 0;
}
