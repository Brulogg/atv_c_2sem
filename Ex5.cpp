
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
		
	int fat=1, n, aux;
	
	printf("Entre com um número inteiro e positivo: ");
 	scanf("%d", &n) ;

	if(n<=0)
	{
		printf("O valor inserido não é inteiro e positivo!\n");
		system("pause");
		system("cls");
		return main();
	}
	aux=n;
	
	while(n>1)
	{
		fat= fat*n;
 		n--;
	}
        
  printf("\nO fatorial de %d é %d", aux, fat);
}
