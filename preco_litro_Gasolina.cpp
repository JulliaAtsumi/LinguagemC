#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	float distancia, consumo, precoCombus, litroGaso=0, qtGastar=0;
	
	printf("Qual a distância da viagem: ");
	scanf("%f", &distancia);
	
	printf("Qual o consumo do carro: ");
	scanf("%f", &consumo);
	
	printf("Qual o preço do combustível: ");
	scanf("%f", &precoCombus);
	
	litroGaso = distancia / consumo;
	qtGastar = litroGaso * precoCombus;
	
	printf("Você precisará de %0.2f Litros de gasolina \nVocê pagará R$%0.2f", litroGaso, qtGastar);
	
}
