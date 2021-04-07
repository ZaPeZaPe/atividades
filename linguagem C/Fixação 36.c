#include<stdio.h>

main()
{
	int w , x , y, z;
	
	printf("Digite uma operação para ser realizada!\n");
	printf("\n1 - Soma\n2 - Subtração\n3 - multiplicação\n4 - Divisão\n\n");
	scanf("%d",&w);
	printf("\nDigite um número!\n\n");
	scanf("%d",&x);
	printf("\nDigite outro número\n\n");
	scanf("%d",&y);
	
	switch(w)
	{
		case 1:z = x+y;
		       printf("\nO resultado da soma é: %d !",z);break;
	    case 2:z = x-y;
	           printf("\nO resultado da subtração é: %d !",z);break;
	    case 3:z = x*y;
	           printf("\nO resultado da multiplicação é: %d !",z);break;
	    case 4:z = x/y;
	           printf("\nO resultado da divisão é: %d !",z);break;
	    default:printf("\nOpção não listada!");
	}
	
}

/* Recebe 2 valores, e oferece a opção de realizar 
Soma , Subtração , Mutiplicação , Divisão */
