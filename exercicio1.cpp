//Nome: Maria Clara Rodrigues Silva
//Matrícula: UC21100014
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define max 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade[max], quant_maior = 0, i;
	float media_idades, soma_idades = 0.0;
	//contextualização
	printf("\n\t\t=== Bem-vindo(a) ao cadastro de idades. Por favor, informe o que for solicitado! ===\n\n");
	//leitura das idades
	for(i = 0; i < max; i++){
		printf(" -> Informe a idade da pessoa(%d): ", i+1);
		scanf("%d", &idade[i]);
		//processamento dos dados
		soma_idades += idade[i];
		if(idade[i] > 18){
			quant_maior++;
		}	
	}
	system("cls"); //para limpar o terminal e organizâ-lo
	
	media_idades = soma_idades / max;
	//contextualização e saída solicitada
	printf("\n\t\tRESULTADO!");
	printf("\n-------------------------------------------");
	printf("\n => A média das idades informadas: %.2f", media_idades);
	//caso não haja pessoas maiores de 18 anos, será informado 0
	if(quant_maior >= 1){
		printf("\n => %d pessoa(s) têm mais de 18 anos!", quant_maior);	
	}
		else if(quant_maior < 1){
			printf("\n => 0 pessoas têm mais de 18 anos!");
		}
	// contextualização e resultado saindo do for
	printf("\n => Posições: ");
	
	for(i = 0; i < max; i++){
		if(idade[i] > 18 && quant_maior >= 1){
			printf(" - {%d}", i);
		}
	}
	//caso não haja idades maiores de 18, são 0 posições
	if(quant_maior < 1){
		printf(" 0 posições");
	}
	printf("\n-------------------------------------------");	
	
	return 0;
}
