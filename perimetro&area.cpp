#include <stdio.h>

main(){
	float base, alt, P=0, A=0;
	printf("Base do triângulo: ");
	scanf("%f",  base);
	printf("Altura do triângulo: ");
	scanf("%f",  alt);
	P = 2*(base+alt);
	A = base*alt;
	printf("\n Perímetro= %0.2f \n Área= %0.2f", P, A);
}
