#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	float valorDeposito, valorRendimento, valorPosRendimento;
	//const int RENDIMENTO_FIXO = 0.007; // juros fixo 0.70% a.m 	
		
	printf("Qual valor a ser depositado? ");
	scanf("%f", &valorDeposito);
	
	valorRendimento = valorDeposito * 0.007;
	valorPosRendimento = valorDeposito + valorRendimento;
	
	printf("Seu rendimento do mês será: R$ %.2f reais \n", valorRendimento);
	printf("Total do depósito com rendimento: R$ %.2f", valorPosRendimento);
	
	return 0;
}
