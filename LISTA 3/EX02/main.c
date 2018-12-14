#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define QTD_ITENS 5

int main(int argc, char *argv[]) {

  int totalMasc = 0, totalFem = 0, i, sexo[QTD_ITENS];
  char nome[QTD_ITENS];


  for(i = 0; i < QTD_ITENS; i++)
  {
    printf("----------- DADOS CLIENTE %d ------------\n", i + 1);
    printf("Qual o nome: ");
    scanf("%s", &nome[i]);

    printf("Qual o sexo (M = Masculino, F = Feminino): ");
    scanf("%s", &sexo[i]);
  }

  for (i = 0; i < QTD_ITENS; i++)
  {
  if(sexo[i] == 'M'){ /* Implementar toupper */
      totalMasc++;
    }else{
      totalFem++;
    }
  }

  printf("\n------------ CLIENTES CADASTRADOS ---------\n");

  printf("\n**************** RESULTADO *****************\n");
  printf("Total de Homens: %d \n", totalMasc);
  printf("Total de Mulheres: %d \n", totalFem);

  system("pause");
  return 0;
}

