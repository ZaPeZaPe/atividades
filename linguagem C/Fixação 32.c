#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um n�mero!\n\n");
	scanf("%d",&x);
	if (x > 0)
	{
		printf("\n� um n�mero positivo!");
	}
	else
	    if (x < 0)
	    {
	    	printf("\n� um n�mero negativo!");
		}
		else
		{
			printf("\n� igual a Zero!");
		}
}

/* Recebe um n�mero e diz se � positivo, negativo ou igual a 0 */
