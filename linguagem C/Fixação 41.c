#include<stdio.h>

main()
{
	int i, n1;
	
	for (i=1; i<=20; i++)
	{
		printf("Digite um n�mero!\n\n");
		scanf("%d",&n1);
		if (n1%2==0)
		{
			printf("\n%d � Par!\n\n",n1);
		}
		else
		{
			printf("\n%d � Impar!\n\n",n1);
		}
	}
}

/* L� 20 n�meros e diz se cada um � par ou �mpar */
