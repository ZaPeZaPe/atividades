#include<stdio.h>

main()
{
	int  p , q , w , x , y , z;
	
	printf("Digite o primeiro valor (1/2)!\n\n");
	scanf("%d",&x);
	printf("Digite o segundo valor, mostrarei o a soma, a subtra��o, a multiplica��o e a divis�o entre os 2 valores\n\n");
	scanf("%d",&y);
	z = x+y;
	q = x-y;
	p = x*y;
	w = x/y;
	printf("Soma: %d\nSubtra��o: %d\nMultiplica��o: %d\nDivis�o: %d",z,q,p,w);
	
	/* Mostra as opera��es de soma, subtra��o, multiplica��o e divis�o entre 2 n�meros digitados */
}
