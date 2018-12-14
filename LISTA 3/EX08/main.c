#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

  int i, num[5], maior = 0;
  setlocale(LC_ALL, "");


  for (i = 0; i < 5; i++)
  {

   printf("Informe o %dº valor: ", i+1);
   scanf("%d", &num[i]);

   if(num[i] > maior){
     maior = num[i];
   }

 }

 printf("MAIOR FOI: %d \n", maior);

system("pause");
 return 0;
}
