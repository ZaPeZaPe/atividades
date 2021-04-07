#include<stdio.h>

main()
{
	int i, anonasc, resu, anoa;
	
	for (i=1; i<=20; i++)
	{
		printf("Digite o ano de nascimento da %d∞ pessoa!\n\n",i);
		scanf("%d",&anonasc);
		printf("\nDigite em que ano vocÍ est·!\n\n");
		scanf("%d",&anoa);
		resu = anoa - anonasc;
		if (resu >= 18)
		{
			printf("\n… maior de idade!\n\n");
		}
		else
		{
			printf("\n… menor de idade!\n\n");
		}
	}
}
