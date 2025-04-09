#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A[10], B[10], R[10], i;
	
	for(i=0; i<=9; i++){
		printf("Valor de A: ");
		scanf("%i", &A[i]);
		printf("Valor de B: ");
		scanf("%i", &B[i]);	
		
		R[i] = A[i] * B[i];
	}
	
	printf("Vetor Resultante: ");
	for(i=0; i<=9; i++){
		printf("%i - ", R[i]);
	}
}
