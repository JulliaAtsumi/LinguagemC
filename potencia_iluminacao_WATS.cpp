#include <stdio.h>
#include <locale.h>
#define wats 18

main(){
	setlocale(LC_ALL, "Portuguese");
	float alt, lar, area=0, potencia=0;
	
	printf("Qual a altura do c�modo: ");
	scanf("%f", &alt);
	
	printf("Qual a largura do c�modo: ");
	scanf("%f", &lar);
	
	area = alt * lar;
	potencia = wats * area;
	
	printf("�rea do c�modo: %0.2f m2 \nPot�ncia de ilumina��o: %0.2f WATS", area, potencia);
}
