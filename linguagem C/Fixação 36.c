#include<stdio.h>

main()
{
	int w , x , y, z;
	
	printf("Digite uma opera��o para ser realizada!\n");
	printf("\n1 - Soma\n2 - Subtra��o\n3 - multiplica��o\n4 - Divis�o\n\n");
	scanf("%d",&w);
	printf("\nDigite um n�mero!\n\n");
	scanf("%d",&x);
	printf("\nDigite outro n�mero\n\n");
	scanf("%d",&y);
	
	switch(w)
	{
		case 1:z = x+y;
		       printf("\nO resultado da soma �: %d !",z);break;
	    case 2:z = x-y;
	           printf("\nO resultado da subtra��o �: %d !",z);break;
	    case 3:z = x*y;
	           printf("\nO resultado da multiplica��o �: %d !",z);break;
	    case 4:z = x/y;
	           printf("\nO resultado da divis�o �: %d !",z);break;
	    default:printf("\nOp��o n�o listada!");
	}
	
}

/* Recebe 2 valores, e oferece a op��o de realizar 
Soma , Subtra��o , Mutiplica��o , Divis�o */
