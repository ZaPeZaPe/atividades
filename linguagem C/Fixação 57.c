#include<stdio.h>

main()
{
	int i=0;
	
	printf("Digite a m�dia que deseja calcular:\n\n1 - Sistema de Informa��o\n2 - Administra��o\n3 - Fisioterapia\n4 - Direito\n\n");
	scanf("%d",&i);
	
	while (i > 0)
	{
		if (i == 1)
		{
			float res, n1, n2;
			
			printf("\nDigite a primeira nota!\n\n");
			scanf("%f",&n1);
			printf("\nDigite a segunda nota!\n\n");
			scanf("%f",&n2);
			res = (n1 + n2)/2;
			printf("\nM�dia : %.1f\nA sua situa��o em Sistema de informa��o �: ",res);
			
			if (res >= 7)
			{
				printf("Aprovado!");
			}
			else
			{
				printf("Reprovado!");
			}
		}
		
		if (i == 2)
		{
			float res, n1, n2;
			
			printf("\nDigite a primeira nota!\n\n");
			scanf("%f",&n1);
			printf("\nDigite a segunda nota!\n\n");
			scanf("%f",&n2);
			res = (n1 + n2)/2;
			printf("\nM�dia : %.1f\nA sua situa��o em Administra��o �: ",res);
			
			if (res >= 5)
			{
				printf("Aprovado!");
			}
			else
			{
				printf("Reprovado!");
			}
		}
		
		if (i == 3)
		{
			float res, n1, n2;
			
			printf("\nDigite a primeira nota!\n\n");
			scanf("%f",&n1);
			printf("\nDigite a segunda nota!\n\n");
			scanf("%f",&n2);
			res = (n1 + n2)/2;
			printf("\nM�dia : %.1f\nA sua situa��o em Fisioterapia �: ",res);
			
			if (res >= 8)
			{
				printf("Aprovado!");
			}
			else
			{
				printf("Reprovado!");
			}
		}
		
		if (i == 4)
		{
			float res, n1, n2;
			
			printf("\nDigite a primeira nota!\n\n");
			scanf("%f",&n1);
			printf("\nDigite a segunda nota!\n\n");
			scanf("%f",&n2);
			res = (n1 + n2)/2;
			printf("\nM�dia : %.1f\nA sua situa��o em Direito �: ",res);
			
			if (res >= 9)
			{
				printf("Aprovado!");
			}
			else
			{
				printf("Reprovado!");
			}
		}
		
		i = i + 4;
		printf("\n\nDeseja calcular outra m�dia?\n\nSe sim digite o valor do pr�ximo curso para calcular!");
		printf("\n\n1 - Sistema de Informa��o\n2 - Administra��o\n3 - Fisioterapia\n4 - Direito\n\nSe n�o digite 0\n\n");
		scanf("%d",&i);
	}
}
