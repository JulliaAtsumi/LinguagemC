#include <stdio.h>
#include <locale.h>

float Porcentual_sup_inf_media(int Sup_media, int Inf_media){
	float Porc_sup, Porc_inf;
	
	Porc_sup = Sup_media/12*100;
	Porc_inf = Inf_media/12*100;
	
	return(Porc_sup, Porc_inf);
}

int Jog_relacao_media(float altura, float media){
	int Sup_media;
	int Inf_media;
	
	for(i=0; i<=11; i++){
		if(altura[i]>media){
			Sup_media += 1;
		}
		
		if(altura[i]<media){
			Inf_media += 1;
		}
	}
	
	Porcentual_sup_inf_media(Inf_media, Sup_media);
}

void Jogador_mais_alto(char nome, float altura){
	float Alt_mais_alto=0;
	int Jog_mais_alto;
	
	for(i=0; i<=11; i++){
		if altura[i] > Alt_mais_alto{
			Jog_mais_alto = i;
		}
	}
	
	return(nome[Jog_mais_alto],altura[Jog_mais_alto])
}

void Mostrar_result(){
	printf("Jogador mais alto: ")
}

float Media_altura(float media, float altura){
	int Jog_sup_media;
	
	media /= 12;
	for(i=0; i<=11; i++){
		if altura[i] > media{
			Jog_sup_media += 1;
		}
	}
	
	Mostrar_result(nome, altura, media);
}

void Jogadores(){
	char nome[12][50];
	float altura[12], media;
	int i;
	
	for(i=0; i<=11; i++){
		printf("Informe o nome do jogador: ");
		fflush(stdin);
		gets(nome[i]);
	
		printf("Digite a altura: ");
		scanf("%f", &altura[i]);
		
		media += altura[i];
	}
	
	Media_altura(media);
}

main(){
	setlocale(ALL, "Portuguese");
	Jogadores();
	
}
