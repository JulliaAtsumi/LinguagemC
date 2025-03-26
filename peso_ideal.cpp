#include <stdio.h>

main()
{
	float alt, peso_ideal=0;
	char sexo;
	
	printf("Qual a sua altura: ");
	scanf("%f", &alt);
	
	printf("Qual o seu sexo (F/M): ");
	fflush(stdin);
	sexo = getchar();
	
	if (sexo == 'F' || sexo == 'f')
	{
		peso_ideal = (62.1 * alt) - 44;
	}
	else if(sexo == 'M' || sexo =='m')
	{
		peso_ideal = (72.7 * alt) - 58;
	}
	
	printf("Seu peso ideal é: %0.2f", peso_ideal);
}

