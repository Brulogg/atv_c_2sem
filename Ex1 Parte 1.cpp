#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("N�MEROS DIVIS�VEIS POR 4 E 5\n");
	
	printf("Insira um n�mero: "); 
	scanf("%d",&n);
	
	if (n%4==0 && n%5==0)
	{
		printf("Este n�mero � divis�vel por 4 e por 5!\nN�mero escolhido: %d.",n);
	}
	else
	{
		printf("Este n�mero n�o � divis�vel por 4 e por 5!\nN�mero escolhido: %d.",n);
	}
}
