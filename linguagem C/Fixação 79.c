#include<stdio.h>

main()
{
	int i, j;
	float mat[2][2], mat2[2][2];
	
	printf("Digite os valores que vão entrar na primeira matriz!\n\n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Casa %d-%d da matriz\n",i+1,j+1);
			scanf("%f",&mat[i][j]);
			printf("\n");
		}
	}
	printf("Digite os valores que vão entrar na segunda matriz!\n\n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Casa %d-%d da matriz\n",i+1,j+1);
			scanf("%f",&mat2[i][j]);
			printf("\n");
		}
	}
	printf("\nPrimeira matriz:\n");
	for (i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			printf("%.1f\t",mat[i][j]);
		}
		printf("\n");
	} 
	printf("\nSegunda matriz:\n");
	for (i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			printf("%.1f\t",mat[i][j]);
		}
		printf("\n");
	}
}
