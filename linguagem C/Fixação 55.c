#include<stdio.h>

main()
{
	int i=1, x;
	float res;
	
	printf("Digite o valor da compra!\n\n");
	scanf("%d",&x);
	
	while (i<=24)
	{
		if (i==5)
		{
			res = x / i;
			printf("\nValor de compra dividido em %d prestações: %.2f\n\n",i,res);
		}
	    
		if (i==10)
		{
			res = x / i;
			printf("\nValor de compra dividido em %d prestações: %.2f\n\n",i,res);
		}
		
		if (i==12)
		{
			res = x / i;
			printf("\nValor de compra dividido em %d prestações: %.2f\n\n",i,res);
		}
		
		if (i==24)
		{
			res = x / i;
			printf("\nValor de compra dividido em %d prestações: %.2f\n\n",i,res);
		}
		i++;
	}
}
