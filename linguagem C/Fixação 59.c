#include<stdio.h>

main()
{
	int i, val[10];
	
	for(i=0; i<10; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	printf("\nValores guardados no vetor:\n\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d\n\n",val[i]);
	}
}
