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
		printf("\n%d é o maior número!",x);
	}
	else
	    if (y > x && y > z)
	    {
	    	printf("\n%d é o maior número!",y);
		}
	    else
	   	{
	   		printf("\n%d é o maior número!",z);
		}
}

/* Pega 3 valores e diz quem é maior dentre os 3 */
