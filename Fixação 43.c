#include<stdio.h>

main()
{
	int i, n1;
	
	for (i=1; i<=20; i++)
	{
		printf("Digite um número!\n\n");
		scanf("%d",&n1);
		if (n1 > 0)
		{
			printf("\nPositivo!\n\n");
		}
		else
		    if (n1 < 0)
		    {
			    printf("\nNegativo!\n\n");
		    }
		    else
		    {
		    	printf("\nZero!\n\n");
			}
	}
}

/* Lê 20 números e diz se são positivos, negativos ou zero */
