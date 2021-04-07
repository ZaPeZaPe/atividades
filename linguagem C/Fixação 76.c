#include<stdio.h>

main()
{
	int i, sexo;
	float alt, idade, somah, somam, somat, qnt, mediat, mediam, mediah, qnt2;

	somam=0;
	somah=0;
	somat=0;
	qnt=0;
	qnt2=0;
	
	for (i=0;i<1000;i++)
	{
		printf("\nDigite seu sexo\n\n0 - Feminino\n1 - Masculino\n\n");
		scanf("d%",&sexo);	
		printf("\nDigite sua altura em centimetros!\n\n");
		scanf("f%",&alt);
		printf("\nDigite sua idade!\n\n");
		scanf("f%",&idade);
		
		somat = somat + idade;
		
		if (sexo == 0)
		{
			somam = somam + alt;
			qnt++;
		}
		
		if (sexo == 1)
		{
			somah = somah + idade;
			qnt2++;
		}
	}
    mediam = somam/qnt;
	mediah = somah/qnt2;
	mediat = somat/1000;
	printf("\nMédia da idade do grupo: %.1f\n",mediat);
	printf("\nMédia da altura das mulheres: %.1f\n",mediam);
	printf("\nMédia da idade dos homens: %.1f\n",mediah);
}
