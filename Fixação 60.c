#include<stdio.h>

main()
{
	int i, val[10];
	
	for(i=0; i<10; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	printf("\nValores pares no vetor:\n\n");
	
	for(i=0; i<10; i++)
	{
		if (val[i]%2==0)
		{
			printf("%d\n\n",val[i]);
		}
	}
}
