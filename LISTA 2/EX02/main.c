#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int num1, num2, soma;
  setlocale(LC_ALL, "");

  printf("Digite um n�mero: ");
  scanf("%d", &num1);

  printf("Digite outros n�mero: ");
  scanf("%d", &num2);

  soma = num1 + num2;

  if (soma > 10)
  {
    printf("O n�mero � maior que 10: %d \n", soma);
  }else{
  	printf("N�mero � menor que 10 \n");
  }

  system("pause");
  return 0;
}
