#include <stdio.h>
#include <locale.h>
#define wats 18

main(){
	setlocale(LC_ALL, "Portuguese");
	float alt, lar, area=0, potencia=0;
	
	printf("Qual a altura do cômodo: ");
	scanf("%f", &alt);
	
	printf("Qual a largura do cômodo: ");
	scanf("%f", &lar);
	
	area = alt * lar;
	potencia = wats * area;
	
	printf("Área do cômodo: %0.2f m2 \nPotência de iluminação: %0.2f WATS", area, potencia);
}
