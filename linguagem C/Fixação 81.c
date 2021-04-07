#include<stdio.h>

main()
{
	int mat[6][6], mat2[6][6], matr[6][6], i, j, soma;
	
	printf("Digite os valores que vão entrar na primeira matriz!\n\n");
	for (i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Casa %d-%d da matriz\n",i+1,j+1);
			scanf("%d",&mat[i][j]);
			printf("\n");
		}
	}
	printf("Digite os valores que vão entrar na segunda matriz!\n\n");
	for (i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Casa %d-%d da matriz\n",i+1,j+1);
			scanf("%d",&mat2[i][j]);
			printf("\n");
		}
	}
	printf("\nMatriz Resultado:\n");
	for (i=0;i<6;i++)
	{
		printf("\n");
		for(j=0;j<6;j++)
		{
			matr[i][j] = mat[i][j]+mat2[i][j];
			if (matr[i][j]%2==0)
			{
				printf("Par: %d\t",matr[i][j]);
			}
			else
			{
				printf("Impar: %d\t",matr[i][j]);
			}
		}
	} 
}
