#include<stdio.h>

main()
{
	int x , y;
	printf("Digite um valor, realizarei um desconto de 10 porcento no valor!\n\n");
	scanf("%d",&x);
	y = x - x*0.1;
	printf("\nO valor final é: %d!",y);
	
	/* Faz um desconto de 10% no valor que é digitado */
}
