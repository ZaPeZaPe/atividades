#include<stdio.h>

main()
{
	int i, res, x, fla=0, vas=0, bot=0, flu=0;
	
	//printf("Pra qual time voc� torce?\n\n1 - Flamengo\n2 - Vasco\n3 - Botafogo\n4 - Fluminense\n");
	for(i=0;i<300;i++)
	{
		printf("\nPra qual time voc� torce?\n\n1 - Flamengo\n2 - Vasco\n3 - Botafogo\n4 - Fluminense\n\n");
		scanf("%d",&x);
		switch (x)
		{
			case 1: fla = fla + 1;break;
			case 2: vas = vas + 1;break;
			case 3: bot = bot + 1;break;
			case 4: flu = flu + 1;break;
			default: printf("\nOp��o indispon�vel!");
		}
	}
	if (fla > vas && fla > bot && fla > flu)
	{
		printf("\nO time mais votado foi o Flamengo!\n");
	}
	if (vas > fla && vas > bot && vas > flu)
	{
		printf("\nO time mais votado foi o Vasco!\n");
	}
	if (bot > fla && bot > vas && bot > flu)
	{
		printf("\nO time mais votado foi o Botafogo!\n");
	}
	if (flu > fla && flu > bot && flu > vas)
	{
		printf("\nO time mais votado foi o Vasco!\n");
	}
	printf("\nQuantidade de torcedores do flamengo: %d\n",fla);
	if (vas > flu)
	{
		res = vas - flu;
		printf("\nDiferen�a de votos entre o Vasco e Fluminense: %d\n",res);
	}
	else
	{
		res = flu - vas;
		printf("\nDiferen�a de votos entre o Fluminense e Vasco: %d\n",res);
	}
}
