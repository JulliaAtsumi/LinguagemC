#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>  

void Classificados(char NomeCand[5][50], char CidadeCand[5][50], int ID_inscricao[], int PontCand[], char RespCand[5][20], char gabarito[20]){
	setlocale(LC_ALL, "Portuguese"); 
	int i, j, qtd_questoes = 19;

    printf("\n\n*************** RELAÇÃO DAS PESSOAS SELECIONADAS PARA A 2ª FASE ***************\n");
    printf("|Inscrição |Nome     |Cidade   |Pontuação|\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j <= qtd_questoes; j++){
            if(RespCand[i][j] == gabarito[j]){
                PontCand[i] += 5;
            }
        }

        if(PontCand[i] >= 80){
            printf("|%i     |%s    |%s   |%i      |\n", ID_inscricao[i], NomeCand[i], CidadeCand[i], PontCand[i]);
        }
    }
}

void Processamento(char gabarito[20]){
	setlocale(LC_ALL, "Portuguese"); 
    char RespCand[5][20], NomeCand[5][50], CidadeCand[5][50];
    int ID_inscricao[5], PontCand[5] = {0};  
    int i;

    for(i = 0; i < 5; i++){
        printf("\nResposta do Candidato %i: ", i + 1);
        fflush(stdin);
        fgets(RespCand[i], sizeof(RespCand[i]), stdin);
        RespCand[i][strcspn(RespCand[i], "\n")] = '\0'; 
    }

    for(i = 0; i < 5; i++){
        printf("\n\nNome do Candidato %i: ", i + 1);
        fflush(stdin);
        fgets(NomeCand[i], sizeof(NomeCand[i]), stdin);
        NomeCand[i][strcspn(NomeCand[i], "\n")] = '\0';  

        printf("\nCidade do Candidato %i: ", i + 1);
        fflush(stdin);
        fgets(CidadeCand[i], sizeof(CidadeCand[i]), stdin);
        CidadeCand[i][strcspn(CidadeCand[i], "\n")] = '\0';  

        printf("\nNúmero de Inscrição do Candidato %i: ", i + 1);
        scanf("%i", &ID_inscricao[i]);

        printf("\n___________________________________________");
    }

    Classificados(NomeCand, CidadeCand, ID_inscricao, PontCand, RespCand, gabarito);
}

void Gabarito(){
    char gabarito[20];
    int i;

    printf("Digite o gabarito (20 questões)\n");
    for(i = 0; i < 20; i++){
        printf("Questão %i: ", i + 1);
        fflush(stdin);
        scanf(" %c", &gabarito[i]); 
    }

    Processamento(gabarito);
}

int main(){
	setlocale(LC_ALL, "Portuguese"); 
    Gabarito();
    return 0;
}

