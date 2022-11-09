#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2,cont=1,ans=1;
	
	do
	{
		printf("Contador: %d\n", cont);
		
		printf("Entre com o primeiro valor: ");
		scanf("%d",&n1);
		
		printf("Entre com o segundo valor: ");
		scanf("%d",&n2);
		
		printf("A soma de %d e %d é %d\n\n", n1,n2,n1+n2);
		cont++;
		
		if (cont==7)
		{
			printf("[1] Sim.\n[2] Não.\nDeseja continuar? ");
			scanf("%d",&ans);
			
			switch(ans)
			{
				case 1:
					cont=1;
					system("cls");
					printf("\nObrigado por continuar!\n");
					system("pause");
					system("cls");
				break;
				case 2:
					ans=0;
				break;
			}
		}
	}
	while(ans==1);
		
	printf("\nObrigado por somar!");
}
