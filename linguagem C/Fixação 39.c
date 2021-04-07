#include<stdio.h>

main()
{
	int curso;
	float nota1 , nota2 , resp;
	
	printf("Escolha o seu curso abaixo:\n\n");
	printf("1 - Sistema de informação\n2 - Administração\n3 - Fisioterapia\n4 - Direito\n\n");
    scanf("%d",&curso);
    printf("\nDigite sua primeira nota!\n\n");
    scanf("%f",&nota1);
    printf("\nDigite sua segunda nota!\n\n");
    scanf("%f",&nota2);
    
    switch (curso)
    {
    	case 1:printf("\nCurso escolhido : Sistema de Informação\n");
    	       printf("\nPrimeira nota: %.1f\nSegunda nota: %.1f",nota1,nota2);
    	       resp = (nota1 + nota2)/2;
    	       printf("\n\nMédia Requisitada: 7.0\n\nMédia Adquirida: %.1f\n",resp);
    	       if (resp >= 7)
    	       {
    	       	printf("\nAprovado!");break;
			   }
			   else
			   {
			   	printf("\nReprovado!");break;
			   }
		
		case 2:printf("\nCurso escolhido : Administração\n");
    	       printf("\nPrimeira nota: %.1f\nSegunda nota: %.1f",nota1,nota2);
    	       resp = (nota1 + nota2)/2;
    	       printf("\n\nMédia Requisitada: 5.0\n\nMédia Adquirida: %.1f\n",resp);
    	       if (resp >= 5)
    	       {
    	       	printf("\nAprovado!");break;
			   }
			   else
			   {
			   	printf("\nReprovado!");break;
			   }
			   
		case 3:printf("\nCurso escolhido : Fisioterapia\n");
    	       printf("\nPrimeira nota: %.1f\nSegunda nota: %.1f",nota1,nota2);
    	       resp = (nota1 + nota2)/2;
    	       printf("\n\nMédia Requisitada: 8.0\n\nMédia Adquirida: %.1f\n",resp);
    	       if (resp >= 8)
    	       {
    	       	printf("\nAprovado!");break;
			   }
			   else
			   {
			   	printf("\nReprovado!");break;
			   }
			   
		case 4:printf("\nCurso escolhido : Direito\n");
    	       printf("\nPrimeira nota: %.1f\nSegunda nota: %.1f",nota1,nota2);
    	       resp = (nota1 + nota2)/2;
    	       printf("\n\nMédia Requisitada: 9.0\n\nMédia Adquirida: %.1f\n",resp);
    	       if (resp >= 9)
    	       {
    	       	printf("\nAprovado!");break;
			   }
			   else
			   {
			   	printf("\nReprovado!");break;
			   }
		
		default:printf("\nCurso não listado!");  
	}
}

/* Recebe o curso desejado + 2 notas, calcula a média e diz se foi aprovado ou não */
