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
		printf("\nO resultado � par!");
	}
	else
	{
		printf("\nO resultado � impar!");
	}
}


/* Recebe 2 n�meros inteiros e diz se o resultado � par ou impar */
