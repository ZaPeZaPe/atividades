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
	int qnt, a, soma;
	
	printf("\n\nDigite um número!\n\n");
	scanf("%d",&a);
	
	if (i==0 && a%2==1)
	{
		soma = 0;
		qnt = 0;
		qnt++;
	}
	else
		if (i==0 && a%2==0)
		{
			soma = 0;
			soma = soma + a;
			qnt = 0;
		}
		else
			if (a%2==1)
			{
				qnt++;
			}
			else
				if (a%2==0)
				{
					soma = soma + a;
				}
			
	return qnt, soma;
}

main()
{
	int i, a, soma=0, qnt;
	
	printf("\n");
	linha(32);
	
	
	printf("\n\nDigite um número!\n\n");
	scanf("%d",&a);
	
	
		
	qnt = impar(a,i);
		
	linha(32);

	printf("\n\nSoma dos numeros pares: %d\n\n",soma);
	printf("\n\nQuantidade de numeros impares: %d\n\n",qnt);
}
