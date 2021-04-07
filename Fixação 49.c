#include<stdio.h>

main()
{
	int i;
	float altura, menor;
	menor = 10;
	
	for(i=1; i<=20; i++)
	{
		printf("\nDigite a %d° altura!\n\n",i);
		scanf("%f",&altura);
		if (altura < menor)
		{
			menor = altura;
		}
	}
	printf("\nA menor altura registrada é: %.2f!",menor);
}
