#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  int salarioBruto, valorPrestacao, linhaCredito;
  setlocale(LC_ALL, "");

  printf("Infome o sal�rio bruto: ");
  scanf("%d", &salarioBruto);

  printf("Informe o valor da presta��o: ");
  scanf("%d", &valorPrestacao);

  linhaCredito = (salarioBruto * 30) / 100;

  if (valorPrestacao > linhaCredito)
  {
    printf("N�O pode ser concedido. \n");
  }else{
    printf("PODE ser concedido.\n");
  }

  system("pause");
  return 0;
}
