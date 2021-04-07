#include<stdio.h>

main()
{
	int i, n1;
	
	for (i=1; i<=75; i++)
	{
		printf("Digite a idade!\n\n");
		scanf("%d",&n1);
		if (n1 >= 18)
		{
			printf("\n… maior de idade!\n\n");
		}
		else
		{
			printf("\n… menor de idade!\n\n");
		}
	}
}

/* LÍ 75 idades e diz se È maior ou menor de idade */
