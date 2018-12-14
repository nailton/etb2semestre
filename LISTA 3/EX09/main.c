#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

  int i, num[5], menor;
  setlocale(LC_ALL, "");


  for (i = 0; i < 5; i++)
  {

   printf("%d - Informe o  valor: ", i+1);
   scanf("%d", &num[i]);

   if(num[i] < menor){
     menor = num[i];
   }

 }

 printf("MENOR FOI: %d \n", menor);

system("pause");
 return 0;
}
