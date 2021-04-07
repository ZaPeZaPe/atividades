#include<stdio.h>

main()
{
	int i, n1;
	
	for (i=1; i<=20; i++)
	{
		printf("Digite um número!\n\n");
		scanf("%d",&n1);
		if (n1%2==0)
		{
			printf("\n%d é Par!\n\n",n1);
		}
		else
		{
			printf("\n%d é Impar!\n\n",n1);
		}
	}
}

/* Lê 20 números e diz se cada um é par ou ímpar */
