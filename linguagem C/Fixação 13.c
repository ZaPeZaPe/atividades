#include<stdio.h>

main()
{
	int x , y , z;
	
	printf("Digite o seu sal�rio fixo!\n");
	scanf("%d",&x);
	printf("\nDigite o valor total das vendas efetuadas feitas por voc� nesse m�s!\n");
	scanf("%d",&y);
	z = x + y * 0.15;
	printf("\nSeu sal�rio fixo �: %d\nSeu sal�rio final �: %d",x,z);
	
	/* Mostra o sal�rio final de algu�m somando o sal�rio fixo com 15% de comiss�o de suas vendas efetuadas */	
}
