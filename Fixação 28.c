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
		printf("\n%d � o maior!",x);
	}
	else
	    if (x < y)
	    {
		    printf("\n%d � o maior!",y);
	    }
	    else
	    {
	    	printf("\nOs n�meros s�o iguais!");
		}
}

/* Recebe 2 n�meros e diz quem � o maior, menor ou se s�o iguais */
