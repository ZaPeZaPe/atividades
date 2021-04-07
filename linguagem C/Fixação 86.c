#include<stdio.h>

int soma(int a, int b, int c)
{
	int res;
	
	res = a + b + c;
	
	return res;
}

main()
{
	int a, b, c;
	
	printf("Digite um valor!\n\n");
	scanf("%d",&a);
	printf("\nDigite outro valor!\n\n");
	scanf("%d",&b);
	printf("\nDigite mais um valor!\n\n");
	scanf("%d",&c);
	
	printf("\nResultado da soma entre os 3 valores: %d",soma(a,b,c));
}
