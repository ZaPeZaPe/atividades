#include<stdio.h>

main()
{
	int i, val[6], qnt, media, soma;
	qnt = 0;
	
	for(i=0; i<6; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	for(i=0; i<6; i++)
	{
		soma = val[i] + soma;
		if (val[i]<10)
		{
			qnt++;
		}
	}
	media = soma/i;
	printf("\nSoma dos números na variavel: %d\n",soma);
	printf("\nMédia dos números na variavel: %d\n",media);
	printf("\nQuantidade de números menor que 10: %d\n",qnt);
}
