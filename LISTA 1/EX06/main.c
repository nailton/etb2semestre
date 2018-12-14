#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	float cel, far;
	
	printf("Qual a temperatura hoje? ");
	scanf("%f", &cel);
	
	far = (9 * cel + 160) / 5;
	
	printf("Temperatura em Fahrenheit é: %.2fºF \n", far);
	
	system("pause");
	return 0;
}
