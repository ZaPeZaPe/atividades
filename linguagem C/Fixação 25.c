#include<stdio.h>

main()
{
	int w , x;
	
	printf("Digite um n�mero!\n\n");
	scanf("%d",&w);
	printf("\nDigite outro n�mero!\n\n");
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

/* Recebe 2 n�meros e imprime em ordem decrescente */
