#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	//  setlocale(0, "portuguese");
	setlocale(LC_ALL, ""); 
	
	// Tens�o (V) Voltagem, Resist�ncia(R), Corrente(I)
	float tensao, resistencia, corrente;
	
		printf("Digite a tens�o(V): ");
		scanf("%f", &tensao);
		
		printf("Digite a resist�ncia total(R): ");
		scanf("%f", &resistencia);
		
		//  Calculos base V = R * I
		corrente = tensao / resistencia;
		
		printf("A corrente �(I): %fA \n", corrente);
		
	system("PAUSE");	
	return 0;
}
