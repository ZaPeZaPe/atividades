#include<stdio.h>

main()
{
	int i;
	float media, nota1[50], nota2[50], nota3[50]

	
	for (i=0;i<50;i++)
	{
		printf("\nDigite a 1° nota do %d° aluno\n\n",i);
		scanf("d%",&nota1[i]);
		printf("\nDigite a 2° nota do %d° aluno\n\n",i);
		scanf("d%",&nota2[i]);
		printf("\nDigite a 3° nota do %d° aluno\n\n",i);
		scanf("d%",&nota3[i]);
	}
	
	for (i=0;i<50;i++)
	{
		media = ((nota1[i]*2) + (nota2[i]*4) + (nota3[i]*3))/10;
		printf("Média do %d° aluno: %.1f",i,media);
	}
}
