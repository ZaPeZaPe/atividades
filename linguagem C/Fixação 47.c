#include<stdio.h>

main()
{
	int i, num, resu=0, qnt=0;
	
	for (i=1; i<=15; i++)
	{
		printf("\nDigite o %d� n�mero!\n\n",i);
		scanf("%d",&num);
		if (num%2==0)
		{
			resu = num + resu;
		}
		else
		{
			qnt = qnt + 1;
		}
	}
	printf("\nA soma dos n�meros pares �: %d!\n\nA quantidade de n�meros �mpares �: %d!",resu,qnt);
}
