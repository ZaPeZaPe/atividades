#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um número!\n\n");
	scanf("%d",&x);
	if (x > 50)
	{
		printf("\n%d é maior que 50!",x);
	}
	else
	    if (x < 50)
	    {
	    	printf("\n%d é menor que 50!",x);
		}
		else
		{
			printf("\n%d é igual a 50!",x);
		}
}

/* Recebe um número e diz se é maior, menor ou igual a 50 */
