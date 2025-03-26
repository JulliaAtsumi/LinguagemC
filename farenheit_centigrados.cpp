#include <stdio.h>

main(){
	float farenheit, centigrados = 0;
	printf("Entre com os graus em Farenheit: ");
	scanf("%f", &farenheit);
	
	centigrados = (5 * (farenheit-32))/9;
	printf("Os graus convertidos em Centigrados: %0.2f", centigrados);
}
