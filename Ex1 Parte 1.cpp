#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("NÚMEROS DIVISÍVEIS POR 4 E 5\n");
	
	printf("Insira um número: "); 
	scanf("%d",&n);
	
	if (n%4==0 && n%5==0)
	{
		printf("Este número é divisível por 4 e por 5!\nNúmero escolhido: %d.",n);
	}
	else
	{
		printf("Este número não é divisível por 4 e por 5!\nNúmero escolhido: %d.",n);
	}
}
