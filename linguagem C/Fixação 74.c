#include<stdio.h>

main()
{
	int i, num[10];
	
	for (i=0;i<10;i++)
	{
		printf("\nDigite um numero!\n\n");
		scanf("d%",&num[i]);
	}
	
	for (i=0;i<10;i++)
	{
		if (num[i] > 10 && num[i] < 20)
		{
			printf("d% está no intervalo!",num[i]);
		}
		else
		{
			printf("d% está fora do intervalo!",num[i]);
		}
	}	
}
