#include<stdio.h>

main()
{
	int i=0;
	
	printf("Digite a op��o desejada:\n\n1 - �rea do Quadrado\n2 - �rea do Tri�ngulo\n3 - �rea do Ret�ngulo\n4 - Cubo de um n�mero\n0 - Sair\n\n");
	scanf("%d",&i);
	
	while (i > 0)
	{
		if (i == 1)
		{
			int l;
			float res;
			
			printf("\nDigite o comprimento do lado do quadrado!\n\n");
			scanf("%d",&l);
			res = l * l;
			printf("\nA �rea do quadrado �: %.2f\n\n",res);
		}
		
		if (i == 2)
		{
			int b, h;
			float res;
						
			printf("\nDigite o comprimento da base do tri�ngulo!\n\n");
			scanf("%d",&b);
			printf("\nDigite o comprimento da altura do tri�ngulo!\n\n");
			scanf("%d",&h);
			res = (b*h)/2;
			printf("\nA �rea do tri�ngulo �: %.2f\n\n",res);
		}
		
		if (i == 3)
		{
			int b, h;
			float res;
						
			printf("\nDigite o comprimento da base do ret�ngulo!\n\n");
			scanf("%d",&b);
			printf("\nDigite o comprimento da altura do ret�ngulo!\n\n");
			scanf("%d",&h);
			res = b*h;
			printf("\nA �rea do ret�ngulo �: %.2f\n\n",res);
		}
		
		if (i == 4)
		{
			int num, res;
			
			printf("\nDigite o n�mero para ser elevado ao cubo!\n\n");
			scanf("%d",&num);
			res = num * num * num;
			printf("\nO cubo de %d �: %d\n\n",num,res);
		}
		
		i = i + 4;
		printf("Digite a op��o desejada:\n\n1 - �rea do Quadrado\n2 - �rea do Tri�ngulo\n3 - �rea do Ret�ngulo\n4 - Cubo de um n�mero\n0 - Sair\n\n");
		scanf("%d",&i);
	}
}
