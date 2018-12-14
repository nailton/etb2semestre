#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "");
  char nomeAluno[60];
  float notas[3], notaFinal;
  int x, contNota;

  printf("Qual nome do aluno? ");
  scanf("%s", nomeAluno);

  printf("Qual a nota 1: ");
  scanf("%f", &notas[0]);

  printf("Qual a nota 2: ");
  scanf("%f", &notas[1]);

  printf("Qual a nota 3: ");
  scanf("%f", &notas[2]);


  notaFinal = (notas[0] + notas[1] + notas[2]) / 3;

  printf("Aluno: %s \n", nomeAluno);
  printf("Média: %.2f \n", notaFinal);

  system("PAUSE");
  return 0;
}
