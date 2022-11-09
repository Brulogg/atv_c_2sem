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
			printf("Insira o valor do %d� termo da equa��o (a): ", cont);
			scanf("%d",&a);
		}
		else if(cont==2)
		{
			printf("Insira o valor do %d� termo da equa��o (b): ", cont);
			scanf("%d",&b);
		}
		else
		{
			printf("Insira o valor do %d� termo da equa��o (c): ", cont);
			scanf("%d",&c);
		}	
	}
	
	if(a==0)
	{
		printf("\n� imposs�vel calcular Bhaskara com o primeiro termo igual a zero!");
		exit(0);
	}
	else
	{
		d = pow(b,2)-4*a*c;
	}
	
	if(d<0)
	{
		printf("\nO valor do delta � menor que zero, a equa��o n�o possui ra�zes reais!");	
	}
	else if(d==0)
	{
		printf("\nO valor do delta � igual a zero, a equa��o possui dois resultados iguais!");
		num=((-b) + (sqrt(d)));
		den=(2*a);
		x=num/den;
		printf("\nOs valores de x s�o %.2f ou %.0f/%.0f.",x,num,den);
	}
	else if(d>0)
	{
		printf("\nO valor do delta � maior que zero, a equa��o possui dois resultados diferentes!");
		x = ((-b) + (sqrt(d)))/(2*a);
		x2 = ((-b) - (sqrt(d)))/(2*a);
		printf("\nO valor de x1 � %.2f.\nO valor de x2 � %.2f.", x, x2);
	}

	
	
	
	
}
