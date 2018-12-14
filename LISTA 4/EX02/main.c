#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define QTD_ITENS 5

int main(int argc, char const *argv[])
{
  float notaA1[QTD_ITENS], notaA2[QTD_ITENS], media[QTD_ITENS];
  char nome[QTD_ITENS];
  int i;

  for (i = 0; i < QTD_ITENS; i++)
  {
    printf("--------- ALUNO %d ----------\n", i+1);

    printf("NOME: ");
    scanf("%s", &nome[i]);

    printf("NOTA A1: ");
    scanf("%f", &notaA1[i]);

    printf("NOTA A2: ");
    scanf("%f", &notaA2[i]);

    media[i] = (notaA1[i] + notaA2[i]) / 2;

  }

  printf("************ RESULTADO ************\n");
  for (i = 0; i < 5; i++)
  {
    printf("%s - ", nome[i]);
    printf("%f - ", media[i]);
    if (media[i] >= 6)
    {
      printf("APROVADO");
    }else{
      printf("REPROVADO");
    }
  }

  system("pause");
  return 0;
}
