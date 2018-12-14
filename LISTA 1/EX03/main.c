#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");

	char nomeVendedor[120];
	float salarioFixo, totalVendas, salarioFinal;
	
	printf("Nome do vendedor: ");
	scanf("%s", &nomeVendedor);
	
	printf("Salário fixo: ");
	scanf("%f", &salarioFixo);
	
	printf("Total de vendas mês: ");
	scanf("%f", &totalVendas);
	
	salarioFinal = salarioFixo + (salarioFixo * 0.15);
	
	system("CLS");
	
	printf("Nome do vendedor: %s \n", nomeVendedor);
	printf("Salário fixo: R$ %.2f \n", salarioFixo);
	printf("Salário fim do mês: R$ %.2f \n", salarioFinal);

	system("pause");
	return 0;
}
