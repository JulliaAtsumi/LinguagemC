#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int x=0, num_andares, entrando, saindo, elevador, devem_sair;
	
	printf("Quantidade de andares do prédio: ");
	scanf("%i", &num_andares);
	
	while(x<=num_andares, x++)
	{
		printf("%i° Andar", x);
		printf("\nNúmero de pessoas Entrando: ");
		scanf("%i", &entrando);
		
		printf("Número de pessoas Saindo: ");
		scanf("%i", &saindo);
		
		elevador += entrando - saindo;
		
		if (elevador>15)
		{
			devem_sair = (elevador-15);
			
			printf("Excesso de passageiros. Devem sair %i", devem_sair);
			
			elevador -= devem_sair;
		}
		printf("\n_______________________________________________");
	}
	printf("Número de pessoas para Descer: %i", elevador);
	system()
}
