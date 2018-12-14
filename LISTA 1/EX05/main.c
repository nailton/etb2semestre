#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A, B, temp;
	
	printf("Digite um valor para A: ");
	scanf("%d", &A);
	
	printf("Digite um valor para B: ");
	scanf("%d", &B);
	
	temp = A;
	A = B;
	B = temp;
	
	printf("Valor de A: %d \n", A);
	printf("Valor de B: %d \n", B);
	
	system("PAUSE");
	return 0;
}
