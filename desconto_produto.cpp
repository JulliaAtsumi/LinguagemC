#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float valAtual, novoVal=0, desconto=0;
	
	printf("Valor atual do produto: ");
	scanf("%f", &valAtual);
	
	desconto = valAtual * 0.125;
	novoVal = valAtual - desconto;
	
	printf("Desconto: R$%0.2f \nValor atualizado: R$%0.2f", desconto, novoVal);
}
