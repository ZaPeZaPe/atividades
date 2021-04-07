#include<stdio.h>

main()
{
	int i, maioralt;
	float alt[50], sex[50], soma, somat, qnt, media, mediah, qnt2;

	soma=0;
	somat=0;
	qnt=0;
	qnt2=0;
	maioralt = 0;
	
	for (i=0;i<50;i++)
	{
		printf("\nDigite seu sexo\n\n1 - Masculino\n2 - Feminino!\n\n");
		scanf("d%",&sex[i]);	
		printf("\nDigite sua altura em centimetros!\n\n");
		scanf("d%",&alt[i]);
		if (sex[i] == 1)
		{
			soma = soma + alt [i];
			qnt++;
		}
	}
	
	for (i=0;i<50;i++)
	{
		somat = somat + alt[i];
		if (alt[i] > maioralt)
		{
			maioralt = alt[i];
		}
		qnt2++;
	}
	mediah = soma/qnt;
	media = somat/qnt2;
	printf("\nMaior altura da turma: %d\n",maioralt);
	printf("\nMédia da altura dos homens: %d\n",mediah);
	printf("\nMédia da altura da turma: %d\n",media);
}
