#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c, d, cont;
	float x,x2,num,den;
	
	for(cont=1;cont<=3;cont++)
	{
		if(cont==1)
		{
			printf("Insira o valor do %dº termo da equação (a): ", cont);
			scanf("%d",&a);
		}
		else if(cont==2)
		{
			printf("Insira o valor do %dº termo da equação (b): ", cont);
			scanf("%d",&b);
		}
		else
		{
			printf("Insira o valor do %dº termo da equação (c): ", cont);
			scanf("%d",&c);
		}	
	}
	
	if(a==0)
	{
		printf("\nÉ impossível calcular Bhaskara com o primeiro termo igual a zero!");
		exit(0);
	}
	else
	{
		d = pow(b,2)-4*a*c;
	}
	
	if(d<0)
	{
		printf("\nO valor do delta é menor que zero, a equação não possui raízes reais!");	
	}
	else if(d==0)
	{
		printf("\nO valor do delta é igual a zero, a equação possui dois resultados iguais!");
		num=((-b) + (sqrt(d)));
		den=(2*a);
		x=num/den;
		printf("\nOs valores de x são %.2f ou %.0f/%.0f.",x,num,den);
	}
	else if(d>0)
	{
		printf("\nO valor do delta é maior que zero, a equação possui dois resultados diferentes!");
		x = ((-b) + (sqrt(d)))/(2*a);
		x2 = ((-b) - (sqrt(d)))/(2*a);
		printf("\nO valor de x1 é %.2f.\nO valor de x2 é %.2f.", x, x2);
	}

	
	
	
	
}
