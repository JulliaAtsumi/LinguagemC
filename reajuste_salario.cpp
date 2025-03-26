#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, novoSal=0;
	
	printf("Qual o salário atual: ");
	scanf("%f", &sal);
	
	novoSal = sal * 1.25;
	printf("Novo salário: R$%0.2f", novoSal);
}
