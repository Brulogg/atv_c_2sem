#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int fat=1, n, aux;

	printf("Entre com um n�mero inteiro e positivo: ");
 	scanf("%d", &n) ;

	if(n<=0)
	{
		printf("O valor inserido n�o � inteiro e positivo!\n");
		system("pause");
		system("cls");
		return main();
	}
	
	aux=n;
 	
	do
	{
 		fat= fat*n;
 		n--;
	} 
	while(n>1);
 	
  printf("\nO fatorial de %d � %d", aux, fat);
  
}
