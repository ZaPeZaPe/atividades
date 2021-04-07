#include<stdio.h>

int idade(int a, int b)
{
	int res;
	
	res = a - b;
	
	return res;
}

main()
{
	int a, b;
	
	printf("Digite em que ano estamos!\n\n");
	scanf("%d",&a);
	printf("\nDigite em que ano voce nasceu!\n\n");
	scanf("%d",&b);
	
	printf("\nVoce tem %d anos!",idade(a,b));
}
