#include<stdio.h>

main()
{
	int x , y , z;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&x);
	printf("Digite outro valor!\n\n");
	scanf("%d",&y);
	z = x+y;
	if (z%2==0)
	{
		printf("\nO resultado é par!");
	}
	else
	{
		printf("\nO resultado é impar!");
	}
}


/* Recebe 2 números inteiros e diz se o resultado é par ou impar */
