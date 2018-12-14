#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	float consumoMedio,  distanciaTotal, consumoTotal;
	
	printf("Informe a distancia total percorrida hoje? ");
	scanf("%f", &distanciaTotal);
	
	printf("Informe o total de combustivel gasto hoje: ");
	scanf("%f", &consumoTotal);
		
	consumoMedio = distanciaTotal / consumoTotal;
	
	printf("Consumo médio foi de: %.2f Km/L \n", consumoMedio);
	
	
	system("pause");
	return 0;
}
