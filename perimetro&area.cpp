#include <stdio.h>

main(){
	float base, alt, P=0, A=0;
	printf("Base do tri�ngulo: ");
	scanf("%f",  base);
	printf("Altura do tri�ngulo: ");
	scanf("%f",  alt);
	P = 2*(base+alt);
	A = base*alt;
	printf("\n Per�metro= %0.2f \n �rea= %0.2f", P, A);
}
