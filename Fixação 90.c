#include<stdio.h>

int neg_ou_pos(int a)
{
	if (a>0)
	{
		printf("\nEste numero � Positivo!");
	}
	else
	{
		printf("\nEste numero � Negativo!");
	}
}

main()
{
	int a;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&a);
	
	neg_ou_pos(a);
}
