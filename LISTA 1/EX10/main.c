#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	float precoCustoProduto, valorVendaProduto, percentual;
	
	printf("Qual o preço de custo do produto? ");
	scanf("%f", &precoCustoProduto);
	
	printf("Qual o percentual para ser aplicado? ");
	scanf("%f", &percentual);
	
	// calculos
	valorVendaProduto = precoCustoProduto + ((precoCustoProduto * percentual) / 100);
	printf("O valor de venda será de R$ %.2f reais.", valorVendaProduto);	
	
	return 0;
}
