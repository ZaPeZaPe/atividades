#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um n�mero!\n\n");
	scanf("%d",&x);
	if (x > 50)
	{
		printf("\n%d � maior que 50!",x);
	}
	else
	    if (x < 50)
	    {
	    	printf("\n%d � menor que 50!",x);
		}
		else
		{
			printf("\n%d � igual a 50!",x);
		}
}

/* Recebe um n�mero e diz se � maior, menor ou igual a 50 */
