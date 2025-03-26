#include <stdio.h>

main(){
	float a, b, soma=0, soma_mult=0;
	printf("Entre com a: ");
	scanf("%f", &a);
	printf("Entre com b: ");
	scanf("%f", &b);
	soma= a + b;
	soma_mult= soma * a;
	printf("Soma= %0.0f \n Soma multiplicada = %0.2f", soma, soma_mult);
}
