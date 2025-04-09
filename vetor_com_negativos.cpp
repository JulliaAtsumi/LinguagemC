#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num[20], i;
	
	for (i=0; i<=19; i++){
		printf("Digite um número: ");
		scanf("%i", &num[i]);
	}
	
	for (i=0; i<=19; i++){
		if (num[i] < 0){
			num[i] = 0;
		}
	}
	
	for (i=0; i<=19; i++){
		printf("%i", num[i]);
	}
}
