#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define QTD_ITENS 5

int main(int argc, char const *argv[])
{


  int idade[QTD_ITENS], somaIdade = 0, i, qtdIdades = 0;
  float altura[QTD_ITENS], peso[QTD_ITENS], mediaAltura = 0, somaAltura = 0;

  for (i = 0; i < QTD_ITENS; i++)
  {

    printf("---------------- DADOS CLIENTE %d ----------------\n", i + 1);
    printf("IDADE: ");
    scanf("%d", &idade[i]);

    printf("ALTURA: ");
    scanf("%f", &altura[i]);

    printf("PESO: ");
    scanf("%f", &peso[i]);

  }

  printf("\n**************** RESULTADO *********************\n");

  for (i = 0; i < QTD_ITENS; i++)
  {
    if (idade[i] > 50)
    {
      somaIdade = somaIdade + 1;
    }

    if (idade[i] > 10 && idade[i] < 20)
    {
      somaAltura = somaAltura + altura[i];
      qtdIdades++;
    }
  }

  mediaAltura = somaAltura / qtdIdades;

  printf("TOTAL MAIORES QUE 50 ANOS: %d \n", somaIdade);
  printf("TIVEMOS %d PESSOAS COM IDADES ENTRE 10-20 ANOS\n", qtdIdades);
  if (mediaAltura > 0)
  {
  printf("MEDIA ALTURAS ENTRE 10-20 ANOS: %.2fM \n", mediaAltura);
  }

  system("pause");
  return 0;
}
