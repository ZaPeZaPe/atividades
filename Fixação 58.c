#include<stdio.h>

main()
{
	int i, soma, num, qnt=0, somal=0, x;
	float media, idade, qnt2, somaM;
	i=1;
	
	printf("Responder o formulário - 1 \nSair - 2\n\n");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1: while (i==1)
		        {
		        printf("\nDigite a sua idade!\n\n");
		        scanf("%f",&idade);
		        printf("\nDigite a quantidade de livros que você leu em 2016!\n\n");
		        scanf("%d",&num);
		
		        if (num >= 5)
		        {
			        qnt++;
		        }
		        else
		        {
			        qnt2++;
			        somaM = somaM + idade;
			        media = somaM/qnt2;
		        }
		
		        if (idade < 10)
		        {
			        somal = somal + num;
		        }
		
	            printf("\nDigite 0 para sair, 1 para continuar!\n\n");
	            scanf("%d",&i);
	                
	            if (i >= 2)
		        {
		        	printf("\nOpção Não disponível! Tente novamente!\n\n");
		        	printf("\nDigite 0 para sair, 1 para continuar!\n\n");
	                scanf("%d",&i);
				}    
	            printf("\nQuantidade de pessoas que leram mais de 5 livros: %d\n\n",qnt);
	            printf("\nMédia das idades de pessoas que leram menos de 5 livros: %.1f\n\n",media);
	            printf("\nQuantidade total de livros que crianças menores de 10 anos leram: %d\n\n",somal);break;
	            }
	            
	    case 0: printf("\n\nTchau Tchau!!\n\n");break;
	    
	    default: printf("\n\nOpção não listada :(\n\nTchau Tchau!!\n\n");
    }
}
	


