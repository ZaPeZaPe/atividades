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
	int qnt=0, soma=0;
	
	for (i=0;i<x;i++)
	{
		if (a[i]%2==1)
		{
			soma = soma + a[i];
		}
	}
	printf("\nSoma dos números impares: %d",soma);
}

main()
{
	int val[6];
	
	printf("Preenchendo o vetor!\n");
	valores(val,6);
	imprimir(val,6);
}
