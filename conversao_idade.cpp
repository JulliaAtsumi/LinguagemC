#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int anoNasc, anoAtual, idade=0, idadeSem=0, idade2028=0;
	
	printf("Ano Nascimento: ");
	scanf("%i", &anoNasc);
	
	printf("Ano atual: ");
	scanf("%i", &anoAtual);
	
	idade = anoAtual - anoNasc;
	idadeSem = idade * (365/7);
	idade2028 = 2028 - anoNasc;
	
	printf("Idade atual: %i \nIdade em semanas: %i \nIdade em 2028: %i", idade, idadeSem, idade2028);
}
