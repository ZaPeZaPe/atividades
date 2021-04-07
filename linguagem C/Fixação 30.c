#include<stdio.h>

main()
{
	int w , x , y , z;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&w);
	printf("\nDigite outro valor!\n\n");
	scanf("%d",&x);
	if (w > x)
	{
		y = w * 5;
		z = x * 10;
		printf("\nPrimeiro número: %d\nSegundo número: %d",y,z);
	}
	else
	    if (w < x)
	    {
	    	y = x * 5;
	        z = w * 10;
	        printf("\nPrimeiro número: %d\nSegundo número: %d",y,z);
		}
		else
		{
			printf("\nOs números são iguais!");
		}
}

/* Pega 2 números, Multiplica o maior por 5 e o menor por 10, ou diz se são iguais */
