#include<stdio.h>

main()
{
	int num, num1, num2, i=1, x;
	float res;
	
	printf("Digite a op��o desejada:\n\n1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n\n");
	scanf("%d",&x);
	
	switch (x)
	{
		case 1: while (i<=2)
			    {
			    	if (i=1)
			    	{
			    		printf("\nDigite o primeiro n�mero para a adi��o!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo n�mero para a adi��o!\n\n");
						scanf("%d",&num2);
					}
			    	i++;
				}
				res = num1 + num2;
				printf("O resultado da soma foi %.0f",res);break;			
		case 2: while (i<=2)
			    {
			    	if (i=1)
			    	{
			    		printf("\nDigite o primeiro n�mero para a subtra��o!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo n�mero para a subtra��o!\n\n");
						scanf("%d",&num2);
					}
			    	i++;
				}
				res = num1 - num2;
				printf("O resultado da subtra��o foi %.0f",res);break;	
		case 3: while (i<=2)
			    {
			    	if (i=1)
			    	{
			    		printf("\nDigite o primeiro n�mero para a multiplica��o!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo n�mero para a multiplica��o!\n\n");
						scanf("%d",&num2);
					}
			    	i++;
				}
				res = num1 * num2;
				printf("O resultado da multiplica��o foi %.0f",res);break;
		case 4: while (i<=2)
			    {
			    	if (i=1)
			    	{
			    		printf("\nDigite o primeiro n�mero para a divis�o!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo n�mero para a divis�o!\n\n");
						scanf("%d",&num2);
					}
			    	i++;
				}
				res = num1 / num2;
				printf("O resultado da divis�o foi %.2f",res);break;
	    default:printf("\nOp��o n�o listada!");
	}
}
