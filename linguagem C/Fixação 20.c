#include<stdio.h>

main()
{
	int x , y;
	
	printf("Digite o primeiro número!\n\n");
	scanf("%d",&x);
	printf("Digite o segundo número!\n\n");
	scanf("%d",&y);
	if (x < y)
	{
		printf("\n%d é menor que %d",x,y);
	}
	else
	{
		printf("\n%d é menor que %d",y,x);
	}
	
	/* Compara o primeiro e o segundo número e diz quem é menor */
}
