#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

main()
{
	int A[6], i, pos, neg;
	
	for(i=0; i<=5; i++)
	{
		printf("Digite os números: ");
		scanf("%i", &A[i]);
		
		if(A[i] < 0)
		{
			neg += A[i];
		}
		else
		{
			pos += A[i];
		}
	}
	 
	printf("Soma negativos: %i", neg);
	printf("Soma positivos: %i", pos);
}
