#include<stdio.h>

main()
{
	int x , y;
	
	printf("Digite o primeiro n�mero!\n\n");
	scanf("%d",&x);
	printf("Digite o segundo n�mero!\n\n");
	scanf("%d",&y);
	if (x > y)
	{
		printf("\n%d � maior que %d",x,y);
	}
	else
	{
		printf("\n%d � maior que %d",y,x);
	}

	/* Compara o primeiro e o segundo n�mero e diz quem � maior */
}
