#include<stdio.h>

int media(int a, int b, int c, int d)
{
	int res;
	
	res = (a + b + c + d)/4;
	
	return res;
}

main()
{
	int a, b, c, d;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&a);
	printf("\nDigite outro valor!\n\n");
	scanf("%d",&b);
	printf("\nDigite mais um valor!\n\n");
	scanf("%d",&c);
	printf("\nDigite o ultimo valor!\n\n");
	scanf("%d",&d);
	
	printf("\nMedia da soma entre os 4 valores: %d",media(a,b,c,d));
}
