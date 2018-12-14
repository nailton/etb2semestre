#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade, i;
	
	for (i = 0; i < 15; i++)
	{
		
	  printf("%d - informe a idade: ", i+1);
	  scanf("%d", &idade);
	  
	  if(idade >= 18){
	   	printf("MAIOR de idade. \n");
	  
	  }else{
	  	printf("MENOR de idade. \n");	
	  }
	  
	}
	
	system("pause");
	return 0;
}
