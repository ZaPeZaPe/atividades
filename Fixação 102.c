#include<stdio.h>
#include<string.h>

int t, i, j;

typedef struct
{
	char nome[10];
	float nota1, nota2, nota3;
}alunos;

preenche(alunos a[], int b)
{	
	for(i=0;i<b;i++)
	{
		printf("\nDigite seu nome\n");
		scanf("%s",&a[i].nome);
		printf("\nDigite sua 1° nota!\n",j+1);
		scanf("%f",&a[i].nota1);
		printf("\nDigite sua 2° nota!\n",j+1);
		scanf("%f",&a[i].nota2);
		printf("\nDigite sua 3° nota!\n",j+1);
		scanf("%f",&a[i].nota3);
	}
}

aprovado(alunos a[], int b)
{	
    
	for(i=0;i<b;i++)
	{
		float media, soma;

        soma = nota1 + nota2 + nota3;
		media = soma/3;
		soma = 0;
		
		if(media>=7)
		{
		   	printf("\n%s\n\n",a[i].nome);
		}
	}
}

main()
{
	alunos x[3];
	
	preenche (x,3);

	aprovado (x,3);
}
