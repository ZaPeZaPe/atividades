#include<stdio.h>

main()
{
	int i, j, mat[4][4], media, qnt, soma;
	
	printf("Digite os valores que vão entrar na matriz!\n\n");
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Casa %d-%d da matriz\n",i+1,j+1);
			scanf("%d",&mat[i][j]);
			printf("\n");
		}
	}
	
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if (mat[i][j]%2==1)
			{
				soma = soma + mat[i][j];
				qnt++;
			}
		}
	}
	media = soma/qnt;
	printf("\nMédia dos valores ímpares existentes na matriz: %d\n",media);
}
