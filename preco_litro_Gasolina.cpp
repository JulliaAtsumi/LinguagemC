#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	float distancia, consumo, precoCombus, litroGaso=0, qtGastar=0;
	
	printf("Qual a dist�ncia da viagem: ");
	scanf("%f", &distancia);
	
	printf("Qual o consumo do carro: ");
	scanf("%f", &consumo);
	
	printf("Qual o pre�o do combust�vel: ");
	scanf("%f", &precoCombus);
	
	litroGaso = distancia / consumo;
	qtGastar = litroGaso * precoCombus;
	
	printf("Voc� precisar� de %0.2f Litros de gasolina \nVoc� pagar� R$%0.2f", litroGaso, qtGastar);
	
}
