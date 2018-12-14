#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int num;
  setlocale(LC_ALL, "");

  printf("Entre com um número: ");
  scanf("%d", &num);

  if (num > 20)
  {
    printf("Seu número maior que 20. \n");
  }else
  {
   printf("Número menor que 20. \n");
  }

  system("pause");
  return 0;
}

