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
	int qnt=0;
	
	for (i=0;i<x;i++)
	{
		if (a[i]%2==0)
		{
			qnt++;
		}
	}
	printf("\nHá %d número(s) pares!",qnt);
}

main()
{
	int val[10];
	
	printf("Preenchendo o vetor!\n");
	valores(val,10);
	imprimir(val,10);
}
