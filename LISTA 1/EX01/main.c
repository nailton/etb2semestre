#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	//  setlocale(0, "portuguese");
	setlocale(LC_ALL, ""); 
	
	// Tensão (V) Voltagem, Resistência(R), Corrente(I)
	float tensao, resistencia, corrente;
	
		printf("Digite a tensão(V): ");
		scanf("%f", &tensao);
		
		printf("Digite a resistência total(R): ");
		scanf("%f", &resistencia);
		
		//  Calculos base V = R * I
		corrente = tensao / resistencia;
		
		printf("A corrente é(I): %fA \n", corrente);
		
	system("PAUSE");	
	return 0;
}
