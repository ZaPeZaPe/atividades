#include<stdio.h>

main ()
{
	int x;
	
	printf("Digite um número, direi se é > , < ou = a 10!\n\n");
	scanf("%d",&x);
	if (x > 10)
	{
		printf("\n%d é maior que 10!",x);
	}
	else
	    if (x < 10)
	{
		printf("\n%d é menor que 10!",x);
	}
		else
	    {
	    	printf("\n%d é igual a 10!",x);
		}
}

/* Diz se um número é maior, menor ou igual a 10*/
