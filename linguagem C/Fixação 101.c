#include<stdio.h>
#include<string.h>
int i,t;

typedef struct 
{
	char nome[10];
	int nota[j];
}Alunos;


preenche(Alunos a[],int b)
{
	for(i=0;i<b;i++)
	{
		printf("\nDigite seu nome\n");
		scanf("%s",&a[i].nome);
		printf("Digite sua idade\n");
		scanf("%d",&a[i].idade);
	}
}

imprimir(Alunos a[],int b)
{
	for(i=0;i<b;i++)
	{
		printf("%s -",a[i].nome);
		printf("%d\n",a[i].idade);
	}
}

maior(Alunos a[],int b)
{
	for(i=0;i<b;i++)
	{	
		if(a[i].idade>20)
		{
		printf("%s -",a[i].nome);
		printf("%d\n",a[i].idade);
		}
	}
}

main()
{
	Alunos x[4];
	
	
	preenche(x,4);
	imprimir(x,4);
}
