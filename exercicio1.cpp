//Nome: Maria Clara Rodrigues Silva
//Matr�cula: UC21100014
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define max 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade[max], quant_maior = 0, i;
	float media_idades, soma_idades = 0.0;
	//contextualiza��o
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
	system("cls"); //para limpar o terminal e organiz�-lo
	
	media_idades = soma_idades / max;
	//contextualiza��o e sa�da solicitada
	printf("\n\t\tRESULTADO!");
	printf("\n-------------------------------------------");
	printf("\n => A m�dia das idades informadas: %.2f", media_idades);
	//caso n�o haja pessoas maiores de 18 anos, ser� informado 0
	if(quant_maior >= 1){
		printf("\n => %d pessoa(s) t�m mais de 18 anos!", quant_maior);	
	}
		else if(quant_maior < 1){
			printf("\n => 0 pessoas t�m mais de 18 anos!");
		}
	// contextualiza��o e resultado saindo do for
	printf("\n => Posi��es: ");
	
	for(i = 0; i < max; i++){
		if(idade[i] > 18 && quant_maior >= 1){
			printf(" - {%d}", i);
		}
	}
	//caso n�o haja idades maiores de 18, s�o 0 posi��es
	if(quant_maior < 1){
		printf(" 0 posi��es");
	}
	printf("\n-------------------------------------------");	
	
	return 0;
}
