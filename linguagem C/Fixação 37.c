#include<stdio.h>

main()
{
	int y;
	float x , z;
	
	printf("Digite o valor da compra!\n\n");
	scanf("%f",&x);
	printf("Digite em quantas prestações vai querer:\n\n5 Prestações\n\n10 Prestações\n\n12 Presatações\n\n24 Prestações\n\n");
	scanf("%d",&y);
	
	switch (y)
	{
		case 5:z = x/5;
		       printf("O valor final é: %.2f !",z);break;
		case 10:z = x/10;
		       printf("O valor final é: %.2f !",z);break;
		case 12:z = x/12;
		       printf("O valor final é: %.2f !",z);break;
		case 24:z = x/24;
		       printf("O valor final é: %.2f !",z);break;
		default:printf("\nPrestação não listada!");
	}
}

/* Recebe o valor da compra e ofereçe 4 opções de prestações para o valor de compra,
de acordo com a quantidade de parcelas escolhidas ele calcula e mostra o valor final */
