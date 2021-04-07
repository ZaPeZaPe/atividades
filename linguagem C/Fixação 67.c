#include<stdio.h>

main ()
{
	int i;
	float num[10], media, soma, qnt;
	
	qnt=0;
	soma=0;
	media=0;
	
	for (i=0;i<10;i++)
	{
		printf("\nDigite o número!\n\n");
		scanf("%f",&num[i]);
	}
	
	for (i=0;i<10;i++)
	{
		if (num[i] >= 10 && num[i] <= 150)
		{
			qnt++;
			soma = soma + num[i];
		}
	}
	
	media = soma/qnt;
	printf("\nMédia dos valores existentes no intervalo de 10 ~ 150: %.1f",media);
}
