#include<stdio.h>

main()
{
	int i, soma=0;
	
	for(i=100; i<=200; i++)
	{
		soma = soma + i;
	}
	printf("\nA soma dos números no intervalo de 100 a 200 é %d!\n\n",soma);
}
