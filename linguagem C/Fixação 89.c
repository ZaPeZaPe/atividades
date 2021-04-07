#include<stdio.h>

int soma(int a, int b)
{
	int res;
	
	res = a + b;
	
	return res;
}

int subt(int a, int b)
{
	int res;
	
	res = a - b;
	
	return res;
}

int mult(int a, int b)
{
	int res;
	
	res = a * b;
	
	return res;
}

int divs(int a, int b)
{
	int res;

	res = a / b;
	
	return res;
}

main()
{
	int a, b;
	
	printf("Digite o primeiro valor!\n\n");
	scanf("%d",&a);
	printf("\nDigite o segundo valor!\n\n");
	scanf("%d",&b);
	
	printf("\nSoma dos valores: %d\nSubtração dos valores: %d\nMultiplicação dos valores: %d\nDivisão dos valores: %d\n",soma(a,b), subt(a,b), mult(a,b), divs(a,b));
}
