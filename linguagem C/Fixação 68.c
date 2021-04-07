#include<stdio.h>

main ()
{
	int i, qnt2;
	float num[100], media, soma, qnt;
	
	qnt=0;
	qnt2=0;
	soma=0;
	media=0;
	
	for (i=0;i<100;i++)
	{
		printf("\nDigite a sua idade!\n\n");
		scanf("%f",&num[i]);
	}
	
	for (i=0;i<100;i++)
	{
		if (num[i] >= 18)
		{
			qnt++;
			soma = soma + num[i];
		}
		else
		{
			qnt2++;
		}
	}
	
	media = soma/qnt;
	printf("\nQuantidade de pessoas menores de idade: %d\n",qnt2);
	printf("\nMédia da quantidade de pessoas maiores de idade: %.1f",media);
}
