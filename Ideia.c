#include<stdio.h>

main()
{
	int i;
	float valori , valorf , valor;
	
	do
	{
		printf("\nDigite o valor do produto!\n\n");
		scanf("%f",&valori);
	    valor = valor + valori;
	    printf("\nValor da compra: %.2f\n\n",valor);	    
	    printf("Quer continuar?\nSe Sim digite 1!\nSe não digite 2!\n\n");
	    scanf("%d",&i);
	} while (i==1);
	printf("\nValor final da compra: %.2f\n\n",valor);
}
