#include <stdio.h>
main()
{
	char sexo;
	printf("\n Digite o sexo F/M: ");
	fflush(stdin);
	sexo = getchar();
	printf("\n O seu sexo = %c \n", sexo);
}
