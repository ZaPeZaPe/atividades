#include<stdio.h>

main()
{
	int A , B , z;
	
	printf("Digite o primeiro valor para ser guardado em A!\n");
	scanf("%d",&A);
	printf("Digite o segundo valor para ser guardado em B!\n");
	scanf("%d",&B);
	z = A;
	A = B;
	B = z;
	printf("A = %d, B = %d",A,B);
	
	/* Realiza uma troca de valores entre A e B */
}
