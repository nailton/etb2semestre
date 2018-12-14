#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int idade, i, contMaiores = 0;
	float altura, somaAltura, mediaAltura;
	setlocale(LC_ALL, "");

	for(i = 0; i < 10; i++){

	 printf("---------- CLIENTE %d ------------\n", i+1);
	 printf("IDADE: ", i+1);
	 scanf("%d", &idade);

	 printf("ALTURA: ", i+1);
	 scanf("%f", &altura);

	 if(idade > 50){
	 	somaAltura = somaAltura + altura;
	 	contMaiores++;
	 }

	}

	mediaAltura = somaAltura / contMaiores;
	printf("*********** RESULTADO *************\n");
	printf("Altura média para maiores de 50 anos foi: %.2f metros", mediaAltura);

	return 0;
}
