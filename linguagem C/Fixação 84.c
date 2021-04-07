#include<stdio.h>

main()
{
	int mat[4][4], i, j, qnt;
	qnt=0;
	
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
			if (mat[i][j]%2==0)
			{
				qnt++;
			}
		}
	} 
	printf("\nQuantidade de valores pares existentes na matriz: %d\n",qnt);
}
