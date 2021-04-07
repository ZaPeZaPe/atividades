#include<stdio.h>

main()
{
	int idade, i, soma=0, num=0;
	float media;
	
	for(i=0; i<30; i++)
	{
		num++;
		printf("\nDigite a %d° idade!\n\n",num);
		scanf("%d",&idade);
		soma = soma + idade;
	}
	printf("%d",num);
	media = soma/num;
	printf("\nA média de idades dessa sala é %.1f anos!",media);
}
