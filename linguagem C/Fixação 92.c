#include<stdio.h>

linha(int v)
{
    int i;
    for(i=0;i<v;i++)
    {
        printf("_");
    }
}

int calc(int a, int b)
{
	int res;
	
	res = a - b;
	
	return res;
}

main()
{
	int i, a, b;
	
	printf("Digite em que ano você está!\n\n");
	scanf("%d",&a);
	linha(32);
	
	for (i=0;i<20;i++)
	{
		printf("\n\nDigite seu ano de nascimento!\n\n");
	    scanf("%d",&b);
	
		if (calc(a,b)>=18)
		{
			printf("\nMaior de idade!\n");
		}
		else
		{
			printf("\nMenor de idade!\n");
		}
		linha(32);
	}	
}
