#include<stdio.h>

main()
{
	float w , x , y , z;
	
	printf("Digite o valor para a multiplicação! (1/3)\n");
	scanf("%f",&x);
	printf("Digite o valor para a multiplicação! (2/3)\n");
	scanf("%f",&y);
	printf("Digite o valor para a multiplicação! (3/3)\n");
	scanf("%f",&z);
	w = (x+y+z) / 3;
	printf("O valor da soma e: %.2f",w);
	
	/* Realiza a média entre 3 valores digitados */
}
