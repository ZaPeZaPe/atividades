#include<stdio.h>

main()
{
	int i, n1;
	
	for (i=1; i<=20; i++)
	{
		printf("Digite um n�mero!\n\n");
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

/* L� 20 n�meros e diz se s�o positivos, negativos ou zero */
