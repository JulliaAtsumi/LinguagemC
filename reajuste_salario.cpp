#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, novoSal=0;
	
	printf("Qual o sal�rio atual: ");
	scanf("%f", &sal);
	
	novoSal = sal * 1.25;
	printf("Novo sal�rio: R$%0.2f", novoSal);
}
