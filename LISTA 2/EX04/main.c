#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int num, multiplo;
  setlocale(LC_ALL, "");

  printf("Entre com um n�mero: ");
  scanf("%d", &num);

  multiplo = num % 3;

  if (multiplo == 0)
  {
    printf("N�mero digitado � multiplo de 3\n");
  }else{
    printf("Infelizmente n�o �\n");
  }

  system("pause");
  return 0;
}
