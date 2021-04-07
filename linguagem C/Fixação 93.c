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
	int i, a, b, qnt=0;
	
	printf("Digite em que ano você está!\n\n");
	scanf("%d",&a);
	linha(32);
	
	for (i=0;i<50;i++)
	{
		printf("\n\nDigite seu ano de nascimento!\n\n");
	    scanf("%d",&b);
	
		if (calc(a,b)>=18)
		{
			qnt++;
		}
		
		linha(32);
	}
	printf("\n\nQuantidade de pessoas maiores de idade: %d\n\n",qnt);
}
