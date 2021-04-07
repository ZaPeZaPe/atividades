#include<stdio.h>

main()
{
	int x , y;
	
	printf("Digite a quantidade de horas trabalhadas neste mês!\n\n");
	scanf("%d",&x);
	y = x * 35;
	printf("\nO seu salário mensal é: %d",y);
	
	/* Calcula o salário mensal multiplicando 35 pela quantidade de horas trabalhadas no mês */
}
