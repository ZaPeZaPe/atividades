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
	printf("\nSoma dos n�meros na variavel: %d\n",soma);
	printf("\nM�dia dos n�meros na variavel: %d\n",media);
	printf("\nQuantidade de n�meros menor que 10: %d\n",qnt);
}
