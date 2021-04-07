#include<stdio.h>

main ()
{
	int i, num[10], cubor[10], quadr[10];
	
	for (i=0;i<10;i++)
	{
		printf("\nDigite um número!\n\n");
		scanf("%d",&num[i]);
	}
	
	for (i=0;i<10;i++)
	{
		quadr[i] = num[i] * num[i];
		printf("\nQuadrado de %d: %d",num[i],quadr[i]);
	}
	
	printf("\n");
	
	for (i=0;i<10;i++)
	{
		cubor[i] = num[i] * num[i] * num[i];
		printf("\nCubo de %d: %d",num[i],cubor[i]);
	}
}
