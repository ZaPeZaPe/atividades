#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um n�mero!\n\n");
	scanf("%d",&x);
	if (x > 0)
	{
		printf("\n%d � positivo!",x);
	}
	else
	{
		printf("\n%d � negativo!",x);
	}
	/* Diz se o n�mero � negativo ou positivo */
}
