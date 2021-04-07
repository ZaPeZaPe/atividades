#include<stdio.h>

main()
{
	int w , x;
	
	printf("Digite um número!\n\n");
	scanf("%d",&w);
	printf("\nDigite outro número!\n\n");
	scanf("%d",&x);
	if (w > x)
	{
		printf("\n%d , %d",w,x);
	}
	else
	{
		printf("\n%d , %d",x,w);		
	}
}

/* Recebe 2 números e imprime em ordem decrescente */
