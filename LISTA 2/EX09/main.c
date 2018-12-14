#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int idade;

  printf("Entre com uma idade: ");
  scanf("%d", &idade);

  if (idade > 0 && idade <= 18)
  {
    printf("MENOR de idade.\n");
  }else if(idade > 18 && idade < 65){
    printf("MAIOR de idade.\n");
  }else{
    printf("IDOSO\n");
  }


  system("pause");
  return 0;
}

