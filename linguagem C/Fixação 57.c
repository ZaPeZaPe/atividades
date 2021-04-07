#include<stdio.h>

main()
{
	int i=0;
	
	printf("Digite a média que deseja calcular:\n\n1 - Sistema de Informação\n2 - Administração\n3 - Fisioterapia\n4 - Direito\n\n");
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
			printf("\nMédia : %.1f\nA sua situação em Sistema de informação é: ",res);
			
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
			printf("\nMédia : %.1f\nA sua situação em Administração é: ",res);
			
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
			printf("\nMédia : %.1f\nA sua situação em Fisioterapia é: ",res);
			
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
			printf("\nMédia : %.1f\nA sua situação em Direito é: ",res);
			
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
		printf("\n\nDeseja calcular outra média?\n\nSe sim digite o valor do próximo curso para calcular!");
		printf("\n\n1 - Sistema de Informação\n2 - Administração\n3 - Fisioterapia\n4 - Direito\n\nSe não digite 0\n\n");
		scanf("%d",&i);
	}
}
