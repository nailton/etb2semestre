#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int a, b;
  setlocale(LC_ALL, "");
  printf("ENTRE COM UM NÚMERO PARA A: ");
  scanf("%d", &a);

  printf("ENTRE COM UM NÚMERO PARA B: ");
  scanf("%d", &b);

  if(a == b)
  {
    printf("VALORES SÃO IGUAIS \n");

  }else if (a > b)
    {
      printf("O VALOR DE A(%d) MAIOR B(%d)\n", a, b);
      printf("O VALOR DE B(%d) MENOR A(%d) \n", b, a);
    }else
      {
       printf("O VALOR DE B(%d) MAIOR A(%d) \n", b, a);
        printf("O VALOR DE A(%d) MENOR B(%d) \n", a, b);
      }

system("pause");
return 0;
}
