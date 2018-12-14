#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int idade;
  setlocale(LC_ALL, "");

  printf("Entre com uma idade: ");
  scanf("%d", &idade);

  if (idade > 18 && idade < 65)
  {
    printf("Eleitor obrigatório.\n");

  }else if(idade > 16 && idade < 18 || idade >= 65){

    printf("Eleitor facultativo.\n");

  }else{

    printf("NÃO eleitor.\n");

  }

  system("pause");
  return 0;
}
