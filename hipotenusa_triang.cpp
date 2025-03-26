#include <stdio.h>
#include <math.h>

main(){
	double catA, catO, hip=0;
	printf("Entre com o Cateto adjascente: ");
	scanf("%lf", &catA);
	printf("Entre com o Cateto oposto: ");
	scanf("%lf", &catO);
	
	hip = sqrt(pow(catA,2) + pow(catO,2));
	printf("Hipotenusa do triângulo: %0.2f", hip);
}
