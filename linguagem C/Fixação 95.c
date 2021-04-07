#include<stdio.h>

linha()
{
    int i;
    for(i=0;i<38;i++)
    {
        printf("_");
    }
}

float calc(float a, float b)
{
	float res;
	
	res = (a + b) / 2;
	
	return res;
}

main()
{
	int i;
	float a, b;
	
	for (i=1;i<=5;i++)
	{
		printf("Digite a primeira nota do aluno %d!\n",i);
		scanf("%f",&a);
		printf("\nDigite a segunda nota do aluno %d!\n",i);
	    scanf("%f",&b);
	    printf("\nMédia do aluno %d: %.1f\n",i,calc(a,b));
	    linha();
	    printf("\n\n");
	}	
}
