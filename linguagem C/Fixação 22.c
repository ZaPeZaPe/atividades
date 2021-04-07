#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um número!\n\n");
	scanf("%d",&x);
	if (x > 0)
	{
		printf("\n%d é positivo!",x);
	}
	else
	{
		printf("\n%d é negativo!",x);
	}
	/* Diz se o número é negativo ou positivo */
}
