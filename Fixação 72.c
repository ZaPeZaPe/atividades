#include<stdio.h>

main()
{
	int i;
	float media, soma, qnt;
    qnt=0;
	
	for (i=14;i<72;i++)
	{
		soma = soma + i;
		qnt++;
	}
	
	printf("%.0f\n",qnt);
	media = soma/qnt;
	printf("Média aritimética dos numeros lidos entre 13 e 73: %.2f",media);
}
