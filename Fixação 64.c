#include<stdio.h>

main()
{
	int i, val[3], impar, positivo;
	impar = 0;
	positivo = 0;
	
	for(i=0; i<3; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	for(i=0; i<3; i++)
	{
		if (val[i]%2==1)
		{
			impar++;
		}
		
		if (val[i] > 0)
		{
			positivo++;
		}
	}
	printf("\nQuantidade de valores ímpares no vetor: %d\n\n",impar);
	printf("\nQuantidade de valores positivos no vetor: %d",positivo);
	
	
	
}
