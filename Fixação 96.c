#include<stdio.h>

linha()
{
    int i;
    for(i=0;i<38;i++)
    {
        printf("_");
    }
}


int neg_ou_pos(int a)
{
	if (a>0)
	{
		printf("\nEste numero é Positivo!");
	}
	else
		if (a<0)
		{
			printf("\nEste numero é Negativo!");
		}
		else
		{
			printf("\nZero!");
		}
}

main()
{
	int a, i;
	
	for(i=0;i<20;i++)
	{
		printf("Digite um valor!\n\n");
		scanf("%d",&a);
		
		neg_ou_pos(a);
		printf("\n");
		linha();
		printf("\n");
		
	}
}
