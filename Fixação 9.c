#include<stdio.h>

main()
{
	int  p , q , w , x , y , z;
	
	printf("Digite o primeiro valor (1/2)!\n\n");
	scanf("%d",&x);
	printf("Digite o segundo valor, mostrarei o a soma, a subtração, a multiplicação e a divisão entre os 2 valores\n\n");
	scanf("%d",&y);
	z = x+y;
	q = x-y;
	p = x*y;
	w = x/y;
	printf("Soma: %d\nSubtração: %d\nMultiplicação: %d\nDivisão: %d",z,q,p,w);
	
	/* Mostra as operações de soma, subtração, multiplicação e divisão entre 2 números digitados */
}
