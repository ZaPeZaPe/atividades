#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um número de 1 a 7!\n\n");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:printf("\nÉ Domingo!");break;
		case 2:printf("\nÉ Segunda-Feira!");break;
		case 3:printf("\nÉ Terça-Feira!");break;
		case 4:printf("\nÉ Quarta-Feira!");break;
		case 5:printf("\nÉ Quinta-Feira!");break;
		case 6:printf("\nÉ Sexta-Feira!");break;
		case 7:printf("\nÉ Sábado!");break;
		default:printf("\nValor não listado!");
	}
}

/* Diz que dia da semana é de acordo com o número digitado */
