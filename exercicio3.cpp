//Nome: Maria Clara Rodrigues Silva
//Matrícula: UC21100014
#include <stdio.h>

int main(){
	float notas[4], soma_notas = 0.0, media_notas;
	
	for(int i = 0; i < 4; i++){
		do{
			printf(" -> Informe a nota(%d): ", i+1);
			scanf("%f", &notas[i]);
			if(notas[i] < 0 || notas[i] > 10){
				printf("\n |INFORME UMA NOTA ENTRE 0.0 E 10.0|\n\n");
			}
		}while(notas[i] < 0 || notas[i] > 10);
		
		soma_notas += notas[i];
	}
	media_notas = soma_notas / 4;
	if(media_notas >= 7.0){
		printf("\n => APROVADO!");
	}
	else if(media_notas < 7.0 && media_notas > 3.0){
		printf("\n => EM RECUPERACAO!");
	}
	else if(media_notas <= 3.0){
		printf("\n => REPROVADO!");
	}
	return 0;
}
