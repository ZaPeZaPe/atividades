#include<stdio.h>

main()
{
	int num, i=1;
	
	while(i<1000)
	{
		if (i%2==0)
		{
			num = i + num;
		}
		i++;
	}
	printf("Valor da soma dos pares menores que 1000 = %d\n",num);
}
