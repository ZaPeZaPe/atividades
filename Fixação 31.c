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
		printf("\n%d é maior que %d",x,y);
	}
	else
	    if (x < y)
	    {
		    printf("\n%d é maior que %d",y,x);
	    }
	    else
	    {
	    	printf("\nOs números são iguais!");
		}
}

/* Recebe 2 números diz quem é maior, menor ou igual */
