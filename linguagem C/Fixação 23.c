#include<stdio.h>

main ()
{
	int x;
	
	printf("Digite um n�mero, direi se � > , < ou = a 10!\n\n");
	scanf("%d",&x);
	if (x > 10)
	{
		printf("\n%d � maior que 10!",x);
	}
	else
	    if (x < 10)
	{
		printf("\n%d � menor que 10!",x);
	}
		else
	    {
	    	printf("\n%d � igual a 10!",x);
		}
}

/* Diz se um n�mero � maior, menor ou igual a 10*/
