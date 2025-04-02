#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

main()
{
	int idade[5], i, z;
	float media;
	
	for(i=0, z=1;i<=4; i++, z++)
	{
		printf("Digite a %i.a idade: ", z);
		scanf("%i", &idade[i]);
	}
	
	for(i=0; i<=4; i++)
	{
		media += idade[i];
	}
	media /= 5;
	printf("Media das idades: %0.0f", media);
}
