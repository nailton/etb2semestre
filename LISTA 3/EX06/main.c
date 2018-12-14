#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{

  int num = 0, somaNumPar = 0, i, numListaPar[10], cont = 0;
  setlocale(LC_ALL, "");


  for(i = 0; i < 10; i++)
  {

   printf("Entre com o %dº número: ", i+1);
   scanf("%d", &num);

   if(num % 2 == 0){
      somaNumPar = somaNumPar + num;
   }

  }

  printf("TOTAL DA SOMA DE NÚMEROS PARES: %d \n", somaNumPar);

  system("PAUSE");
  return 0;
}
