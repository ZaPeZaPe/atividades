#include<stdio.h>

main()
{
	int x , y , z;
	
	printf("Digite o seu salário fixo!\n");
	scanf("%d",&x);
	printf("\nDigite o valor total das vendas efetuadas feitas por você nesse mês!\n");
	scanf("%d",&y);
	z = x + y * 0.15;
	printf("\nSeu salário fixo é: %d\nSeu salário final é: %d",x,z);
	
	/* Mostra o salário final de alguém somando o salário fixo com 15% de comissão de suas vendas efetuadas */	
}
