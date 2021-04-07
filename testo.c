#include<stdio.h>

main()
{
	int i, x, y[3], media=0;
	

	
	for(i=0;i<2;i++)
	{
		printf("Idade: \n");
		scanf("%d",&x);
		for(i=0;i<3;i++)
		{
		   printf("Nota: \n");
		   scanf("%d",&y[i]);
	    }
	}
	
	for(i=0;i<3;i++)
	{
	   media = media + y[i];
	}
	
	for(i=0;i<2;i++)
	{
		for(i=0;i<3;i++)
		{
		    if(media>=7)
		    {
		    	printf("%d",x);
				printf("%d\n",y);
			}
		}
	}
}
