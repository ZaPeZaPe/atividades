#include<stdio.h>

main()
{
	int i=1, x, qnt=0, mid=0;
	
	while (i>0)
	{
		printf("\nQual a sua idade?\n");
		scanf("%d",&x);
		if (x > mid)
		{
			mid = x;
		}
		if (x >= 18 && x <= 35)
		{
			qnt++;
		}
		printf("\nQuer continuar digitando as idades?\n\nDigite:\n\n1 - sim\n0 - Não\n\n");
		scanf("%d",&i);
	}
	printf("\nMaior idade dos habitantes: %d\n",mid);
	printf("\nQuantidade de pessoas com idades entre 18 e 35: %d\n",qnt);
}
