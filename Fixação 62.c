#include<stdio.h>

main()
{
	int i, val[20], posicao;
	
	for(i=0; i<20; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	printf("\nPosições dos valores pares no vetor:\n\n");
	
	for(i=0; i<20; i++)
	{
		posicao = i + 1;
		if (val[i]%2==0)
		{
			printf("%d\n\n",posicao);
		}
	}
}
