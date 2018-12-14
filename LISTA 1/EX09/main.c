#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	float valorCompra, valorPrestacoes;
	
	printf("Entre com o valor da sua compra: ");
	scanf("%f", &valorCompra);
	
	//	calculos
	valorPrestacoes = valorCompra / 5;
	
	printf("As prestações são de R$ %.2f reais. \n", valorPrestacoes);

	system("pause");
	return 0;
}
