#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define QTD_ITENS 5

int main(int argc, char const *argv[])
{
  char nome[QTD_ITENS];
  int i, idade[QTD_ITENS];
  setlocale(LC_ALL, "");

  for (i = 0; i < QTD_ITENS; i++)
  {
    printf("------------- NOME ALUNO %d ------------\n", i+1);
    printf("NOME: ");
    scanf("%s", &nome[i]);

    printf("IDADE: ");
    scanf("%d", &idade[i]);
  }

 system("cls");

  printf("------------- ALUNOS MAIORES DE 18 ------------\n");
  for (i = 0; i < QTD_ITENS; i++)
  {
    if (idade[i] >= 18)
    {
      printf("%c - ", nome[i]);
      printf("%d \n", idade[i]);
    }
  }

  printf("------------- ALUNOS MENORES DE IDADE ------------\n");
  for (i = 0; i < QTD_ITENS; i++)
  {
    if (idade[i] < 18)
    {
      printf("%c - ", nome[i]);
      printf("%d \n", idade[i]);
    }
  }


  system("pause");
  return 0;
}
