#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int num;
  setlocale(LC_ALL, "");

  printf("Entre com um n�mero: ");
  scanf("%d", &num);

  if (num > 20)
  {
    printf("Seu n�mero maior que 20. \n");
  }else
  {
   printf("N�mero menor que 20. \n");
  }

  system("pause");
  return 0;
}

