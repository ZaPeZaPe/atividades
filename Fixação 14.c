#include<stdio.h>

main()
{
	int x , y , z;
	
	printf("Digite em que ano estamos!\n");
	scanf("%d",&z);
	printf("\nDigite o seu ano de nascimento!\n");
	scanf("%d",&x);
	y = z - x;
	printf("\nVoc� tem ou vai fazer %d anos neste ano!",y);
	
	/* Diz quantos anos voc� tem ou vai fazer neste ano */
}
