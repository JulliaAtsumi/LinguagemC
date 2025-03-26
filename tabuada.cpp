#include <stdio.h>

main()
{
	int tab, x, res=0;
	
	printf("Digite a tabuada: ");
	scanf("%i", &tab);
	
	for (x=1; x<11; x++)
	{
		res = tab * x;
		printf("\n%i X %i = %i", tab, x, res);
		
	}
}
