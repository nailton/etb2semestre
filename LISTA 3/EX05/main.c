#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(int argc, char *argv[])
{
  
  setlocale(LC_ALL, "");
  
  int num, i;
  
  printf("Digite um número: ");   
  scanf("%d", &num);
  
  for(i = 0; i <= 10; i++)
  {
    printf("%d X %d = %d \n", num, i, num * i );  
  }
  
  system("PAUSE");	
  return 0;
}
