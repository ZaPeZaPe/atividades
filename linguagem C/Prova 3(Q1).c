#include<stdio.h>

int i, val[20];

linha()
{
    int i;
    printf("\n");
    for(i=0;i<38;i++)
    {
        printf("*");
    }
    printf("\n");
}

//a)
preenche(int x)
{    
	for(i=0;i<x;i++)
	{
		printf("\nDigite um valor\n");
		scanf("%d",&val[i]);
	}
}

//b)
int retorna(int x)
{	
    int qnt=0;
    
	for(i=0;i<x;i++)
	{
		if (val[i]>10)
		{
			qnt++;
		}
	}
	
	return qnt;
}

//c)
int menor(int x)
{	
    int menor;
    
    menor = val[1]; 
    
	for(i=0;i<x;i++)
	{
		if (val[i]<menor)
		{
			menor = val[i];
		}
	}
	
	return menor;
}

//d)
par_ou_impar(int x)
{   
    printf("\nValores pares no vetor:\n");
	for(i=0;i<x;i++)
	{
		if (val[i]%2==0)
		{
			printf("%d\n",val[i]);
		}
	}
	printf("\nValores impares no vetor:\n");
	for(i=0;i<x;i++)
	{
		if (val[i]%2==1)
		{
			printf("%d\n",val[i]);
		}
	}
}

//e)
int maior(int x, int y)
{	
    int qnt=0;
    
	for(i=0;i<x;i++)
	{
		if (val[i]>y)
		{
			qnt++;
		}
	}
	
	return qnt;
}

main()
{
	int y;
	
    linha();
    //a)
	preenche(20);
	linha();
	//b)
	printf("\nQuantidade de números maiores que 10 no vetor: %d\n",retorna(20));
	linha();
	//c)
	printf("\nMenor número presente no vetor: %d\n",menor(20));
	linha();
	//d)
    par_ou_impar(20);
    linha();
    //e)
    printf("\nDigite um outro valor\n");
    scanf("%d",&y);
    printf("\nQuantidade de valores presentes no vetor que são maiores que esse valor: %d\n",maior(20,y));
}
