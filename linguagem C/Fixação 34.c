#include<stdio.h>

main()
{
	int x;
	
	printf("Digite um n˙mero de 1 a 12!\n\n");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:printf("\n… Janeiro!");break;
		case 2:printf("\n… Fevereiro!");break;
		case 3:printf("\n… MarÁo!");break;
		case 4:printf("\n… Abril!");break;
		case 5:printf("\n… Maio!");break;
		case 6:printf("\n… Junho!");break;
		case 7:printf("\n… Julho!");break;
		case 8:printf("\n… Agosto!");break;
		case 9:printf("\n… Setembro!");break;
		case 10:printf("\n… Outubro!");break;
		case 11:printf("\n… Novembro!");break;
		case 12:printf("\n… Dezembro!");break;
		default:printf("\nValor n„o listado!");
	}
}

/* Diz que mÍs È de acordo com o n˙mero digitado */
