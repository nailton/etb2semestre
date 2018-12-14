#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "");
  int numeros = 0, i, soma = 0;
  
  printf("ENTRE COM 10 NUMEROS INTEIROS \n");
  
  for(i = 0; i < 10; i++){
        
    printf("Entre com o %dº número: ", i+1);        
    scanf("%d", &numeros);
    
    soma = soma + numeros;
    
  } 
   
   printf("TOTAL: %d \n", soma);
  
  system("PAUSE");	
  return 0;
}
