#include<stdio.h>

main()
{
	int y;
	float x , z;
	
	printf("Digite o valor da compra!\n\n");
	scanf("%f",&x);
	printf("Digite em quantas presta��es vai querer:\n\n5 Presta��es\n\n10 Presta��es\n\n12 Presata��es\n\n24 Presta��es\n\n");
	scanf("%d",&y);
	
	switch (y)
	{
		case 5:z = x/5;
		       printf("O valor final �: %.2f !",z);break;
		case 10:z = x/10;
		       printf("O valor final �: %.2f !",z);break;
		case 12:z = x/12;
		       printf("O valor final �: %.2f !",z);break;
		case 24:z = x/24;
		       printf("O valor final �: %.2f !",z);break;
		default:printf("\nPresta��o n�o listada!");
	}
}

/* Recebe o valor da compra e ofere�e 4 op��es de presta��es para o valor de compra,
de acordo com a quantidade de parcelas escolhidas ele calcula e mostra o valor final */
