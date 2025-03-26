#include <stdio.h>
main()
{
	float L_vendidos, pagar=0;
	char tipo_combus;
	
	printf("Digite os litros vendidos: ");
	scanf("%f", &L_vendidos);
	
	printf("Digite o tipo de combustível (A/G/D): ");
	fflush(stdin);
	tipo_combus = getchar();
	
	if (tipo_combus == 'A' || tipo_combus == 'a')
		if (L_vendidos <= 20)
		{
			pagar = L_vendidos * 3.34 * 0.97;
		}
		else
		{
			pagar = L_vendidos * 3.34 * 0.95;
		}

	else if(tipo_combus == 'G' || tipo_combus == 'g')
		if (L_vendidos<=20)
		{
			pagar = L_vendidos * 4.30 * 0.96;
		}
		else
		{
			pagar = L_vendidos * 4.30 * 0.94;
		}
	else if(tipo_combus == 'D' || tipo_combus == 'd')
		if(L_vendidos<=20)
		{
			pagar = L_vendidos * 4.50 * 0.92;
		}
		else
		{
			pagar = L_vendidos * 4.50 * 0.90;
		}

	printf("Pagar: R$%0.2f", pagar);
}
