#include <stdio.h>

main()
{
	int n1, n2, res=0;
	char operacao;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	
	printf("Qual operaçao matematica? (+, -, *, /) ");
	fflush(stdin);
	operacao = getchar();
	
	switch(operacao)
	{
		case '+':
			res = n1 + n2;
			break;
		case '-':
			res = n1 - n2;
			break;
		case '*':
			res = n1 * n2;
			break;
		case '/':
			res = n1 / n2;
			break;
	default:
		printf("Escolha um operador válido!");
	}
	
	printf("Resposta: %i", res);
}
