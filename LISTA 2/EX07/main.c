#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int num, modTres, modSete;
  setlocale(LC_ALL, "");

  printf("ENTRE COM UM N�MERO: ");
  scanf("%d", &num);

  modTres = num % 3;
  modSete = num % 7;

  if (modTres == 0 && modSete == 0)
  {
    printf("O n�mero %d � divis�vel por 3 e 7. \n", num);
  }else{
    printf("O n�mero %d N�O � divis�vel por 3 e 7. \n", num);
  }


  system("pause");
  return 0;
}
