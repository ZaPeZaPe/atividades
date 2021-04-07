#include<stdio.h>

main()
{
	int l , b , h , n , x , y;
	
	printf("Digite a operação desejada:\n\n1 - Área do quadrado\n\n2 - Área do triangulo\n\n3 - Área do retângulo\n\n4 - Cubo de um número\n\n");
	scanf("%d",&x);
	switch (x)
	{
		case 1:printf("\nDigite o lado do quadrado!\n\n");
		       scanf("%d",&l);
		       y = l*l;
		       printf("\nA área do quadrado é: %d!",y);break;
		       
	    case 2:printf("\nDigite a base do triângulo!\n\n");
	           scanf("%d",&b);
	           printf("\nDigite a altura do triângulo!\n\n");
	           scanf("%d",&h);
	           y = (b*h)/2;
	           printf("\nA área do triângulo é: %d",y);break;
	           
	    case 3:printf("\nDigite a base do retângulo!\n\n");
	           scanf("%d",&b);
	           printf("\nDigite a altura do retângulo!\n\n");
	           scanf("%d",&h);
	           y = b*h;
	           printf("\nA área do retângulo é: %d",y);break;
	           
	    case 4:printf("\nDigite o lado do quadrado!\n\n");
		       scanf("%d",&n);
		       y = n*n*n;
		       printf("\n%d ao cubo é: %d!",n,y);break;
		       
		default:printf("\nOpção não listada!");
	}
}

/* Disponibiliza 4 opções de operação para o usuário escolher, de acordo com a opção escolhida
o computador lê os valores inseridos pelo usuário e em seguida calcula e exibe a resposta na tela */
