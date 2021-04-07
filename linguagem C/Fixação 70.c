#include<stdio.h>

main()
{
	int i;
	float NOTA1[20], NOTA2[20], MEDIA[20], soma, maior, menor, maiorv, menorv;
	maior = 0;
	menor = 10;	
	
	for (i=0;i<20;i++)
	{
		printf("\nDigite a primeira nota do aluno da turma 64137!\n\n");
		scanf("f%",&NOTA1[i]);
		printf("\nDigite a segunda nota do aluno da turma 64137!\n\n");
		scanf("f%",&NOTA2[i]);
	}
	
	for (i=0;i<20;i++)
	{
		soma = NOTA1[i] + NOTA2[i];
		MEDIA[i] = soma/2;
	}
	
	for (i=0;i<20;i++)
	{
		menorv = MEDIA[i];
		maiorv = MEDIA[i];
		
		if (maior < maiorv)
		{
			maior = maiorv;
		}
		
		if (menor > menorv)
		{
			menor = menorv;
		}
	}
	
	printf("A maior média da sala é: %.1f",maior);
	printf("A menor média da sala é: %.1f",menor);
}
