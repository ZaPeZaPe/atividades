#include<stdio.h>

main()
{
	int x , y , z;
	
	printf("Digite a 1° de suas 3 notas!\n\n");
	scanf("%d",&x);
	printf("\nDigite 2° de suas 3 notas!\n\n");
	scanf("%d",&y);
	printf("\nDigite 3° de suas 3 notas!\n\n");
	scanf("%d",&z);
	if (x > 7)
	{
		printf("\n--------------------------------\n\n\nAprovado na 1° nota\n\n");
	}
	else
	{
		printf("\n--------------------------------\n\n\nReprovado na 1° nota\n\n");
	}
	if (y > 7)
	{
		printf("Aprovado na 2° nota\n\n");
	}
	else
	{
		printf("Reprovado na 2° nota\n\n");
	}	
	if (z > 7)
	{
		printf("Aprovado na 3° nota\n\n");
	}
	else
	{
		printf("Reprovado na 3° nota\n\n");
	}	
}

/* Recebe 3 notas e diz se está aprovado ou reprovado em cada uma delas */
