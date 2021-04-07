#include<stdio.h>

main()
{
	int mat[2][2], i, j;
	
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Digite o valor que vai entrar na casa %d-%d da primeira matriz\n",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	for (i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			printf("%d\t",mat[i][j]);
		}
	}
}
