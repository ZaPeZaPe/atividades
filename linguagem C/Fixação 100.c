#include<stdio.h>

int i;

float notas (int a[], int x)
{
	for (i=0;i<x;i++)
	{
		printf("\nDigite o %d° valor\n\n",i+1);
		scanf("%d",&a[i]);
	}
}

int imprimir (int a[], int x)
{	
	printf("\nPosição dos números pares:\n\n");
	
	for (i=0;i<x;i++)
	{
		if (a[i]%2==0)
		{
			printf("%d ",i);
		}
	}
}

main()
{
	int val[20];
	
	printf("Preenchendo o vetor!\n");
	valores(val,20);
	imprimir(val,20);
}
