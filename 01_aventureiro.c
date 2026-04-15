//Desafio - Jogo de Batalha Naval - Nível Aventureiro 
#include <stdio.h>

//Declarando as (Constantes Símbolicas) para facilitar e organizar
#define LINHAS 10 
#define COLUNAS 10
#define TAMNAVIO 3

int main(){
    
    int  tabuleiro[LINHAS][COLUNAS] = {0}; //Área do tabuleiro 10x10 utilizando uma Matriz (array bidimensional)

    int navioHorizontal[TAMNAVIO] = {3, 3, 3};  //Três posições horizontal todas declaradas pelo numero 3 utilizando Vetores(array unidimensional) 
    int navioVertical[TAMNAVIO] = {3, 3, 3};  //Três posições vertical todas declaradas pelo numero 3 utilizando Vetores(array unidimensional) 
    int navioDiagonal1[TAMNAVIO] = {3, 3, 3};  //Três posições diagonal todas declaradas pelo numero 3 utilizando Vetores(array unidimensional)
    int navioDiagonal2[TAMNAVIO] = {3, 3, 3};  //Três posições diagonal todas declaradas pelo numero 3 utilizando Vetores(array unidimensional)

    int linhaH = 3, colunaH = 0;   //Declarando a posição do navio horizontal
    for (int i = 0; i < TAMNAVIO; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    int linhaV = 7, colunaV = 7;   //Declarando a posição do navio vertical
    for (int j = 0; j < TAMNAVIO; j++){
        tabuleiro[linhaV + j][colunaV] = navioVertical[j];
    }

    int linhaD1 = 1, colunaD1 = 6;    //Declarando a posição do primeiro navio diagonal
    for (int k = 0; k < TAMNAVIO; k++){
        tabuleiro[linhaD1 + k][colunaD1 + k] = navioDiagonal1[k];
    }

    int linhaD2 = 8, colunaD2 = 2;    //Declarando a posição do segundo navio diagonal
    for (int l = 0; l < TAMNAVIO; l++){
        tabuleiro[linhaD2 - l][colunaD2 + l] = navioDiagonal2[l];
    }

    printf("### Tabuleiro Batalha Naval ###\n\n");
    printf("     A B C D E F G H I J\n\n");  //Adicionei cordenadas (A-J)

    for (int i = 0; i < LINHAS; i++){    //Área da exibição do tabuleiro utilizando loops aninhados
        printf("%2d   ", i + 1);    //Adicionei cordenadas (1-10)
        for(int j = 0; j < COLUNAS; j++){
            
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }




return 0;
}