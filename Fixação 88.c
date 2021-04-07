#include<stdio.h>

int par_ou_impar(int a)
{
	if (a%2==0)
	{
		printf("\nEste numero é Par!");
	}
	else
	{
		printf("\nEste numero é Impar!");
	}
}

main()
{
	int a;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&a);
	
	par_ou_impar(a);
}
