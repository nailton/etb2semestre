#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero, cont, i;
  
  cont = 1;
  for(i = 1; i < 100; i++)
  {
        
   numero = i % 2;
  
   if(numero != 0){

    printf("Sequencia %d -  %d \n", cont, i);
        cont++;
    }

  }
  
  system("PAUSE");	
  return 0;
}
