#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

main()
{
	int tab, x, res=0;
	char resp='S';
	
	while(resp=='S'){
		printf("Digite a tabuada: ");
		scanf("%i", &tab);
		
		for (x=1; x<11; x++)
		{
			res = tab * x;
			printf("\n%i X %i = %i", tab, x, res);
		}
		
		printf("\n\nDeseja fazer outra tabuada? [S/N] ");
		fflush(stdin);
		resp=getchar();
		resp = toupper(resp);
		system("cls");
	}             
	
	system("pause>null");
}
