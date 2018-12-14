#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int num1, num2, soma;
  setlocale(LC_ALL, "");
  
  printf("Digite um número: ");
  scanf("%d", &num1);

  printf("Digite um número: ");
  scanf("%d", &num2);

  soma = num1 + num2;

  if (soma > 20)
  {
    soma = soma + 8;
  }else if(soma <= 20){
    soma = soma - 5;
  }

  printf("Resultado: %d: ", soma);

  system("pause");
  return 0;
}
