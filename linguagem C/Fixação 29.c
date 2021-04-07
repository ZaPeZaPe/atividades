#include<stdio.h>

main()
{
	int x , y;
	
	printf("Digite um número!\n\n");
	scanf("%d",&x);
	printf("\nDigite outro número!\n\n");
	scanf("%d",&y);
	if (x > y)
	{
		printf("\n%d\n%d",x,y);
	}
	else
	    if (y > x)
	    {
	    	printf("\n%d\n%d",y,x);
		}
		else
		{
			printf("\nOs números são iguais!");
		}
}

/* Recebe 2 números e imprime os números em ordem decrescente ou se são iguals */
