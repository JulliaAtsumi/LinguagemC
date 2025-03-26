#include <stdio.h>

main()
{
	float tempo, tempMedio=0, melhorTemp=0;
	int x, volta;
	
	for (x=1; x<6; x++)
	{
		printf("Tempo da volta %i: ", x);
		scanf("%f", &tempo);
		
		tempMedio += tempo;
		
		if (tempo >= melhorTemp)
		{
			melhorTemp = tempo;
			volta = x;
		}
	}
	tempMedio /= 5;
	printf("\nTempo medio: %0.2f \nMelhor tempo: %0.2f \nVolta com melhor tempo: %i", tempMedio, melhorTemp, volta);
}
