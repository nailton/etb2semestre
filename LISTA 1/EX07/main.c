#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	float dolar, cotacao, real;
	
	printf("Quantos dólares você tem? U$: ");
	scanf("%f", &dolar);
	
	printf("Qual a cotação do dólar hoje? ");
	scanf("%f", &cotacao);
	
	real = dolar * cotacao;
	
	printf("Você tem R$ %.2f reais. \n", real);
	
	
	system("pause");
	return 0;
}
