#include<stdio.h>

main()
{
	int w , x , y , z;
	
	printf("Digite um numero, pois irei lhe mostrar o mesmo dividido por 2!\n\n");
	scanf("%d",&w);
	y = w / 2;
	printf("\nCalma calma, seu numero dividido por 2 vai ser exibido depois de voce digitar outro numero,\nmas o numero digitado agora vai ser multiplicado por 3!\n\n");
	scanf("%d",&x);
	z = x * 3;
	printf("\nSeu primeiro numero (dividido por 2) foi: %d !\n\nO segundo numero (multiplicado por 3) foi: %d !",y,z);
	
	/* Divide o primeiro número por 2 e o segundo é multiplicado por 3 */
}
