#include<stdio.h>

main()
{
	int i, j;
	float mat[2][2], mat2[2][2], matr[6][6];
	
	printf("Digite os valores que vão entrar na primeira matriz!\n\n");
	for (i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Casa %d-%d da matriz\n",i+1,j+1);
			scanf("%f",&mat[i][j]);
			printf("\n");
		}
	}
	printf("Digite os valores que vão entrar na segunda matriz!\n\n");
	for (i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Casa %d-%d da matriz\n",i+1,j+1);
			scanf("%f",&mat2[i][j]);
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
				printf("par:%.1f\t",matr[i][j]);
			}
			else
			{
				printf("ímpar:%.1f\t",matr[i][j]);
			}
		}
	} 
}
