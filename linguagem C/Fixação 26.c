#include<stdio.h>

main()
{
	int x , y , z;
	
	printf("Digite um valor (1/3)!\n\n");
	scanf("%d",&x);
	printf("\nDigite um valor (2/3)!\n\n");
	scanf("%d",&y);
	printf("\nDigite um valor (3/3)!\n\n");
	scanf("%d",&z);
	if (x > y && x > z)
	{
		printf("\n%d � o maior n�mero!",x);
	}
	else
	    if (y > x && y > z)
	    {
	    	printf("\n%d � o maior n�mero!",y);
		}
	    else
	   	{
	   		printf("\n%d � o maior n�mero!",z);
		}
}

/* Pega 3 valores e diz quem � maior dentre os 3 */
