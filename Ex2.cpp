#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n,maior,cont;
	
	for(cont=1;cont<=3;cont++)
	{
		printf("Entre com o %d� n�mero: ",cont);
		scanf("%d",&n);
		
		if (cont==1)
		{
			maior=n;
		}
		else if (n>maior)
		{
			maior=n;
		}
	}
	printf("\nO maior n�mero � %d.",maior);
}
