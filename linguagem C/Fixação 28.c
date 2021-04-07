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
		printf("\n%d é o maior!",x);
	}
	else
	    if (x < y)
	    {
		    printf("\n%d é o maior!",y);
	    }
	    else
	    {
	    	printf("\nOs números são iguais!");
		}
}

/* Recebe 2 números e diz quem é o maior, menor ou se são iguais */
