#include<stdio.h>

main()
{
	float nota1 , nota2 , media;
	int i;
	
	for (i=1;i<=10;i++)
	{
		printf("Digite a primeira nota\n\n");
		scanf("%f",&nota1);
		printf("\nDigite a segunda nota\n\n");
		scanf("%f",&nota2);
		media = (nota1 + nota2)/2;
		printf("\nM�dia: %.1f\n\n",media);
	}
}

/* L� 2 notas e calcula a m�dia 10 vezes */
