#include<stdio.h>

linha(int v)
{
    int i;
    for(i=0;i<v;i++)
    {
        printf("_");
    }
}

int impar(int a)
{
	int qnt;
	
	qnt = 0;
	
	if(a%2==1)
	{
		qnt = 1;
	}
			
	return qnt;
}

main()
{
	int i, a, soma=0, qnt=0;
	
	printf("\n");
	linha(32);
	
	for (i=0;i<5;i++)
	{
		printf("\n\nDigite um número!\n\n");
	    scanf("%d",&a);
	
		if (a%2==0)
		{
			soma = soma + a;
		}
		
		qnt = qnt + impar(a);
		
		linha(32);
	}
	printf("\n\nSoma dos numeros pares: %d\n\n",soma);
	printf("\n\nQuantidade de numeros impares: %d\n\n",qnt);
}
