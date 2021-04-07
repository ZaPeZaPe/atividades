#include<stdio.h>

main()
{
	int i=0;
	
	printf("Digite a opção desejada:\n\n1 - Área do Quadrado\n2 - Área do Triângulo\n3 - Área do Retângulo\n4 - Cubo de um número\n0 - Sair\n\n");
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
			printf("\nA área do quadrado é: %.2f\n\n",res);
		}
		
		if (i == 2)
		{
			int b, h;
			float res;
						
			printf("\nDigite o comprimento da base do triângulo!\n\n");
			scanf("%d",&b);
			printf("\nDigite o comprimento da altura do triângulo!\n\n");
			scanf("%d",&h);
			res = (b*h)/2;
			printf("\nA área do triângulo é: %.2f\n\n",res);
		}
		
		if (i == 3)
		{
			int b, h;
			float res;
						
			printf("\nDigite o comprimento da base do retângulo!\n\n");
			scanf("%d",&b);
			printf("\nDigite o comprimento da altura do retângulo!\n\n");
			scanf("%d",&h);
			res = b*h;
			printf("\nA área do retângulo é: %.2f\n\n",res);
		}
		
		if (i == 4)
		{
			int num, res;
			
			printf("\nDigite o número para ser elevado ao cubo!\n\n");
			scanf("%d",&num);
			res = num * num * num;
			printf("\nO cubo de %d é: %d\n\n",num,res);
		}
		
		i = i + 4;
		printf("Digite a opção desejada:\n\n1 - Área do Quadrado\n2 - Área do Triângulo\n3 - Área do Retângulo\n4 - Cubo de um número\n0 - Sair\n\n");
		scanf("%d",&i);
	}
}
