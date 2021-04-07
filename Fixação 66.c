#include<stdio.h>

main()
{
	int i, val[10], posicao, valor, here;
	
	for(i=0; i<10; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	printf("\nDigite o valor que quer localizar:\n\n");
	scanf("%d",&valor);
	
	for(i=0; i<10; i++)
	{
		if (val[i]==valor)
		{
			posicao = i;
			here = 1;		
		}
	}
	if (here == 0)
	{
		printf("\nValor não encontrado.\n\n");
	}
	else
	{
		printf("\nValor encontrado na casa %d\n\n",posicao);
	}
}
