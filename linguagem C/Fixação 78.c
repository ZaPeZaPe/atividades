#include<stdio.h>

main()
{
	int i, x, cubo, soma;

	printf("\nDigite quantos números quer ler!\n\n");
	scanf("%d",&x);
	
	int num[x];
	
	for (i=0;i<x;i++)
	{
		soma = i + 1;
		printf("\nDigite o %d° número!\n\n",soma);
		scanf("%d",&num[i]);
	}
	printf("\n");
	for (i=0;i<x;i++)
	{
		cubo = num[i] * num [i];
		printf("Cubo de %d: %d\n",num[i],cubo);
	}
}
