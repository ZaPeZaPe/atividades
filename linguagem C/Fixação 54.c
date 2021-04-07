#include<stdio.h>

main()
{
	int num, num1, num2, i=1, x;
	float res;
	
	printf("Digite a opção desejada:\n\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n");
	scanf("%d",&x);
	
	switch (x)
	{
		case 1: while (i<=2)
			    {
			    	if (i=1)
			    	{
			    		printf("\nDigite o primeiro número para a adição!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo número para a adição!\n\n");
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
			    		printf("\nDigite o primeiro número para a subtração!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo número para a subtração!\n\n");
						scanf("%d",&num2);
					}
			    	i++;
				}
				res = num1 - num2;
				printf("O resultado da subtração foi %.0f",res);break;	
		case 3: while (i<=2)
			    {
			    	if (i=1)
			    	{
			    		printf("\nDigite o primeiro número para a multiplicação!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo número para a multiplicação!\n\n");
						scanf("%d",&num2);
					}
			    	i++;
				}
				res = num1 * num2;
				printf("O resultado da multiplicação foi %.0f",res);break;
		case 4: while (i<=2)
			    {
			    	if (i=1)
			    	{
			    		printf("\nDigite o primeiro número para a divisão!\n\n");
						scanf("%d",&num1);
					}
					
					if (i=2)
					{
						printf("\nDigite o segundo número para a divisão!\n\n");
						scanf("%d",&num2);
					}
			    	i++;
				}
				res = num1 / num2;
				printf("O resultado da divisão foi %.2f",res);break;
	    default:printf("\nOpção não listada!");
	}
}
