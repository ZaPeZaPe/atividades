#include<stdio.h>

main()
{
	int x , y;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&x);
	printf("\nDigite outro valor!\n\n");
	scanf("%d",&y);
	if (x > y)
	{
		printf("\n%d � maior que %d",x,y);
	}
	else
	    if (x < y)
	    {
		    printf("\n%d � maior que %d",y,x);
	    }
	    else
	    {
	    	printf("\nOs n�meros s�o iguais!");
		}
}

/* Recebe 2 n�meros diz quem � maior, menor ou igual */
