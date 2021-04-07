#include<stdio.h>
#include<string.h>

//1)
int i;

typedef struct
{
	char nome[10];
	int matricula, idade;
	float nota1, nota2, nota3;
}alunos;


cadastro(alunos a[], int b)
{	
	for(i=0;i<b;i++)
	{
		printf("--------------------------------------\n");
		printf("\nDigite seu nome\n");
		scanf("%s",&a[i].nome);
		printf("\nDigite sua idade\n");
		scanf("%d",&a[i].idade);
		printf("\nDigite seu numero de matrícula\n");
		scanf("%d",&a[i].matricula);
		printf("\nDigite sua 1° nota!\n");
		scanf("%f",&a[i].nota1);
		printf("\nDigite sua 2° nota!\n");
		scanf("%f",&a[i].nota2);
		printf("\nDigite sua 3° nota!\n");
		scanf("%f",&a[i].nota3);
	}
}

//2)
consulta(alunos a[],int b, int y)
{
	//int qnt=0;
	
	for(i=0;i<b;i++)
	{		
		if(a[i].matricula==y)
		{
			printf("\nAluno Matriculado:\n");
		   	printf("\nNome: %s\n",a[i].nome);
		   	printf("Idade: %d\n",a[i].idade);
		   	printf("N° de Matricula: %d\n",a[i].matricula);
		   	printf("Nota 1: %.1f\n",a[i].nota1);
			printf("Nota 2: %.1f\n",a[i].nota2);
			printf("Nota 3: %.1f\n",a[i].nota3);
			
		   	//qnt = 1;
		}
	}
	
	/*if(qnt = 0)
	{
		printf("\nMatricula não registrada\n");
	}*/
	
	/* comentei a verificação de matricula pois não foi informado
	o que fazer se a matricula não fosse encontrada */
}

//3)
imprimir(alunos a[],int b)
{
	for(i=0;i<b;i++)
	{
		printf("\nNome: %s\n",a[i].nome);
		printf("Idade: %d\n",a[i].idade);
		printf("Matricula: %d\n",a[i].matricula);
		printf("Nota 1: %.1f\n",a[i].nota1);
		printf("Nota 2: %.1f\n",a[i].nota2);
		printf("Nota 3: %.1f\n",a[i].nota3);
	}
}

//4)
media(alunos a[], int b)
{	
	for(i=0;i<b;i++)
	{
		float media, soma;

        soma = a[i].nota1 + a[i].nota2 + a[i].nota3;
		media = soma/3;
		soma = 0;
		
		printf("\nNome: %s\n",a[i].nome);
		printf("Media: %.1f\n",media);
	}
}

//5)
velho (alunos a[], int b)
{
	int vel, mat;
	
    vel = a[1].idade;
	
	for(i=0;i<b;i++)
	{
		if(vel<a[i].idade)
		{
			vel = a[i].idade;
			mat = a[i].matricula;
		}
	}
	
	for(i=0;i<b;i++)
	{		
		if(a[i].matricula==mat)
		{
		   	printf("\nNome: %s\n",a[i].nome);
		   	printf("Idade: %d\n",a[i].idade);
		   	printf("N° de Matricula: %d\n",a[i].matricula);
		   	printf("Nota 1: %.1f\n",a[i].nota1);
			printf("Nota 2: %.1f\n",a[i].nota2);
			printf("Nota 3: %.1f\n",a[i].nota3);
		}
	}
}

linha()
{
    int i;
    printf("\n");
    for(i=0;i<38;i++)
    {
        printf("*");
    }
    printf("\n");
}

main()
{
	int y;
	
	//1)
	alunos x[50];
	
	linha();
	cadastro (x,50);
	
	linha();
	//2)
	printf("\nConsulta:\n\nDigite o seu numero de matricula\n");
	scanf("%d",&y);
	consulta (x,50,y);
	
	linha();
	//3)
	printf("\nAlunos Cadastrados:\n");
	imprimir (x,50);
    
    linha();
    //4)
    printf("\nMedia dos Alunos:\n");
	media (x,50);
	
	linha();
	//4)
	printf("\nDados do aluno mais velho:\n");
	velho (x,50);
}
