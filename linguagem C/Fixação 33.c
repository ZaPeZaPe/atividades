#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um n�mero de 1 a 7!\n\n");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:printf("\n� Domingo!");break;
		case 2:printf("\n� Segunda-Feira!");break;
		case 3:printf("\n� Ter�a-Feira!");break;
		case 4:printf("\n� Quarta-Feira!");break;
		case 5:printf("\n� Quinta-Feira!");break;
		case 6:printf("\n� Sexta-Feira!");break;
		case 7:printf("\n� S�bado!");break;
		default:printf("\nValor n�o listado!");
	}
}

/* Diz que dia da semana � de acordo com o n�mero digitado */
