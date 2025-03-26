#include <stdio.h>
#include<string.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	char filme[30];
	char sexo, maior_lotacao;
	int x, horario, cod_entrada, idade, sessao_14=0, sessao_20=0, idade18_meia=0, mulheres_ghost=0, maior30_dancacomlobos=0;
	
	for(x=1; x<6; x++)
	{	
		printf("\nHorário da sessão ((1)14:30 ou (2)20:30): ");
		scanf("%i", &horario);
		
		printf("Pagou Meia(1) ou Inteira(2): ");
		scanf("%i", &cod_entrada);
		
		printf("Qual o seu Sexo (F/M): ");
		fflush(stdin);
		sexo = getchar();
		
		printf("Qual a sua idade: ");
		scanf("%i", &idade);
		
		printf("Qual filme assistiu: ");
		fflush(stdin);
		gets(filme);
		
		if (horario == 1)
			sessao_14 += 1;
		else
			sessao_20 += 1;
			
		if(idade>18 && cod_entrada == 2)
			idade18_meia += 1;
		
		if(sexo=='F' && strcmp(filme,"Ghost")==0)
			mulheres_ghost += 1;

		if(idade>30 && strcmp(filme,"Danca Com Lobos")==0 && horario==1)
		{
			maior30_dancacomlobos += 1;
		}
		
		printf("_________________________________________________\n");	
	}
	if(sessao_14 > sessao_20)
		printf("Horario da sessao de maior lotacao: 14:30h\n");
	else
		printf("Horario da sessao de maior lotacao: 20:30h\n");
	
	printf("Número de pessoas maiores de 18 anos que pagaram meia entrada: %i\n", idade18_meia);
	
	printf("Quantidade de mulheres que assistiram ao filme Ghost: %i\n", mulheres_ghost);
	
	printf("Número de pessoas maiores de 30 anos que assistiram ao filme Dança com Lobosna sessao das 14:30h: %i\n", maior30_dancacomlobos);
}
