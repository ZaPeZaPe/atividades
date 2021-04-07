#include<stdio.h>

main()
{
	int mat[4][4], i, j;
	
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
	
	printf("\nValores que estão nas casas com coordenadas idênticas:\n");
	for (i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			if (i==j)
			{
				printf("|%d|\t",mat[i][j]);
			}
			else
			{
				printf("|-|\t",mat[i][j]);
			}
		}
	} 
}
