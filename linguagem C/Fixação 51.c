#include<stdio.h>

main()
{
	int maiorn=0, num, i=0;
	
	while(i < 20)
	{
		printf("\nDigite um n�mero!\n\n");
		scanf("%d",&num);
		if (num > maiorn)
		{
			maiorn = num;
		}
		i++;
	}
	printf("\n%d foi o maior n�mero digitado!\n\n",maiorn);
}
