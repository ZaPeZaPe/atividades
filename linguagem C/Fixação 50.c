#include<stdio.h>

main()
{
	int idade, i, num, soma=0, qnt=0, somaM=0, qnt2=0, somal;
	float media;
	
	for(i=0; i<10; i++)
	{
		printf("\nDigite a sua idade!\n\n");
		scanf("%d",&idade);
		printf("\nDigite a quantidade de livros que você leu em 2016!\n\n");
		scanf("%d",&num);
		
		if (num >= 5)
		{
			qnt++;
		}
		else
		{
			qnt2++;
			somaM = somaM + idade;
		}
		
		if (idade < 10)
		{
			somal = somal + num;
		}
	}
	media = somaM/qnt2;
	printf("\nQuantidade de pessoas que leram mais de 5 livros: %d\n\n",qnt);
	printf("\nMédia das idades de pessoas que leram menos de 5 livros: %.1f\n\n",media);
	printf("\nQuantidade total de livros que crianças menores de 10 anos leram: %d\n\n",somal);
	
}
