#include <stdio.h>

main(){
	float a, b, Sub, Mult, Div;
	printf("\n Entre com a: ");
	scanf("%f", &a);
	printf("\n Entre com b: ");
	scanf("%f", &b);
	Sub = a - b;
	Mult = a * b;
	Div = a / b;
	printf("\n Subtração = %0.2f \n Multiplicação = %0.2f \n Divisão = %0.2f", Sub, Mult, Div);
	
	
}

