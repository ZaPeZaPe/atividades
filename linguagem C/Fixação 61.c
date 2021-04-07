#include<stdio.h>

main()
{
	int i, val[6], soma=0;
	
	for(i=0; i<6; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	printf("\nSoma dos valores impares no vetor:\n\n");
	
	for(i=0; i<6; i++)
	{
		if (val[i]%2==1)
		{
			soma = soma + val[i];
		}
	}
	printf("%d",soma);
}
