#include<stdio.h>

main()
{
	int x , y;
	
	printf("Digite um n�mero!\n\n");
	scanf("%d",&x);
	printf("\nDigite outro n�mero!\n\n");
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
			printf("\nOs n�meros s�o iguais!");
		}
}

/* Recebe 2 n�meros e imprime os n�meros em ordem decrescente ou se s�o iguals */
