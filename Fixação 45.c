#include<stdio.h>

main()
{
	int i, idade, maiores, x;
	maiores = 0;
	for(i=1; i<=50; i++)
	{
		printf("\nDigite a idade!\n\n");
		scanf("%d",&idade);
		if (idade >= 18)
		{
			maiores = maiores + 1;
		}
		else
		{
			maiores = maiores + 0;
		}
	}
	printf("\n%d pessoas são maiores de idade!",maiores);
}
