#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{

  int n;
  setlocale(LC_ALL, "");

  printf("ENTRE COM UM NÚMERO: ");
  scanf("%d", &n);

  if (n > 0)
  {
    printf("POSITIVO \n");
  }else if (n < 0)
  {
    printf("NEGATIVO \n");
  }else{
    printf("NULO \n");

  }

  system("pause");
  return 0;
}
