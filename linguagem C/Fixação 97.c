#include<stdio.h>

int i;

int valores (int a[], int x)
{
	for (i=0;i<x;i++)
	{
		printf("\nDigite o %d° valor\n\n",i+1);
		scanf("%d",&a[i]);
	}
}

int imprimir (int a[], int x)
{
	for (i=0;i<x;i++)
	{
		printf("\n%d° número: %d\n",i+1,a[i]);
	}
}

main()
{
	int val[10];
	
	printf("Preenchendo o vetor!\n");
	valores(val,10);
	imprimir(val,10);
}
