#include<stdio.h>

main()
{
	int i, val[3], premaior, maior, check;
	premaior = 0;
	maior = 0;
	check = 0;
	
	for(i=0; i<3; i++)
	{
		printf("\nDigite um valor!\n\n");
		scanf("%d",&val[i]);
	}
	
	printf("\nMaior elemento presente na casa:\n\n");
	
	for(i=0; i<3; i++)
	{
		check = i;
		//Variavel criada pra checar a variavel no if
		if (check>premaior)
		{
			maior = i;
		}
		premaior = i;
		//Variavel criada pra receber o valor testado e ser comparado no if
	}
	printf("%d",maior);
}
