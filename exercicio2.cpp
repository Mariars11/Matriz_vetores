//Nome: Maria Clara Rodrigues Silva
//Matrícula: UC21100014
#include <stdio.h>

int main(){
	int aux, vetor[aux], i;
	
	printf("-> Informe o tamanho do vetor: ");
	scanf("%d", &aux);
	printf("\n");
	
	for(i = 0; i < aux; i++){
		printf("-> Informe o valor(%d): ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < aux; i++){
		printf("\n => Valor[%d]: %d", i+1,vetor[i]);
	}
	
	return 0;
}
