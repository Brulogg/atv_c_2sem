#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	float mod4, mod5;
	
	printf("NÚMEROS DIVISÍVEIS POR 4 E 5\n"); 
	
	printf("Insira um número: "); 
	scanf("%d",&n);
	
	mod4 = n-4 * (n/4);
	mod5 = n-5 * (n/5);
	
	if (mod4==0 && mod5==0)
	{
		printf("Este número é divisível por 4 e por 5!\nNúmero escolhido: %d.",n);
	}
	else
	{
		printf("Este número não é divisível por 4 e por 5!\nNúmero escolhido: %d.",n);
	}
}
