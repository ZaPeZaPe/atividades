#include<stdio.h>

int neg_ou_pos(int a)
{
	if (a>0)
	{
		printf("\nEste numero é Positivo!");
	}
	else
	{
		printf("\nEste numero é Negativo!");
	}
}

main()
{
	int a;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&a);
	
	neg_ou_pos(a);
}
