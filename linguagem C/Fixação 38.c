#include<stdio.h>

main()
{
	int l , b , h , n , x , y;
	
	printf("Digite a opera��o desejada:\n\n1 - �rea do quadrado\n\n2 - �rea do triangulo\n\n3 - �rea do ret�ngulo\n\n4 - Cubo de um n�mero\n\n");
	scanf("%d",&x);
	switch (x)
	{
		case 1:printf("\nDigite o lado do quadrado!\n\n");
		       scanf("%d",&l);
		       y = l*l;
		       printf("\nA �rea do quadrado �: %d!",y);break;
		       
	    case 2:printf("\nDigite a base do tri�ngulo!\n\n");
	           scanf("%d",&b);
	           printf("\nDigite a altura do tri�ngulo!\n\n");
	           scanf("%d",&h);
	           y = (b*h)/2;
	           printf("\nA �rea do tri�ngulo �: %d",y);break;
	           
	    case 3:printf("\nDigite a base do ret�ngulo!\n\n");
	           scanf("%d",&b);
	           printf("\nDigite a altura do ret�ngulo!\n\n");
	           scanf("%d",&h);
	           y = b*h;
	           printf("\nA �rea do ret�ngulo �: %d",y);break;
	           
	    case 4:printf("\nDigite o lado do quadrado!\n\n");
		       scanf("%d",&n);
		       y = n*n*n;
		       printf("\n%d ao cubo �: %d!",n,y);break;
		       
		default:printf("\nOp��o n�o listada!");
	}
}

/* Disponibiliza 4 op��es de opera��o para o usu�rio escolher, de acordo com a op��o escolhida
o computador l� os valores inseridos pelo usu�rio e em seguida calcula e exibe a resposta na tela */
