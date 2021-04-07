#include<stdio.h>

main()
{
	int num, i=1;
	
	while(i<=25)
	{
		num = i * i;
		printf("%d^2 = %d\n",i,num);
		i++;
	}
}
