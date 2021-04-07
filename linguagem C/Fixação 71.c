#include<stdio.h>

main()
{
	int i, num[6], num2[6], qnt;
	qnt = 0;
	
	for (i=0;i<6;i++)
	{
		printf("\nDigite 6 numeros!\n\n");
		scanf("d%",&num[i]);
	}
	
	for (i=0;i<6;i++)
	{
		printf("\nDigite mais 6 numeros!\n\n");
		scanf("d%",&num2[i]);
	}
	
	for (i=0;i<20;i++)
	{
		if (num[i] == num2[i])
		{
			qnt++;
		}
	}
	
	printf("Quantidade de números iguais: %d",qnt);
}
