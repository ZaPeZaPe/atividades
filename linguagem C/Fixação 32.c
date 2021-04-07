#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um número!\n\n");
	scanf("%d",&x);
	if (x > 0)
	{
		printf("\nÉ um número positivo!");
	}
	else
	    if (x < 0)
	    {
	    	printf("\nÉ um número negativo!");
		}
		else
		{
			printf("\nÉ igual a Zero!");
		}
}

/* Recebe um número e diz se é positivo, negativo ou igual a 0 */
