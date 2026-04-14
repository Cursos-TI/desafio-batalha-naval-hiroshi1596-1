//Desafio - Jogo de Batalha Naval - Nível Novato 
#include <stdio.h>

int main(){
    
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int  tabuleiro[10][10] = {0}; //Área do tabuleiro 10x10 utilizando uma Matriz (array bidimensional)

    int navioHorizontal[3] = {3, 3, 3};  //Três posições horizontal todas declaradas pelo numero 3 utilizando Vetores(array unidimensional) 
    int navioVertical[3] = {3, 3, 3};  //Três posições vertical todas declaradas pelo numero 3 utilizando Vetores(array unidimensional) 

    int linhaH = 3, colunaH = 0;   //Declarando a posição do navio horizontal
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    int linhaV = 7, colunaV = 7;   //Declarando a posição do navio vertical
    for (int j = 0; j < 3; j++){
        tabuleiro[linhaV + j][colunaV] = navioVertical[j];
    }

    printf("### Tabuleiro Batalha Naval ###\n\n");
    printf("     A B C D E F G H I J\n\n");  //Adicionei cordenadas (A-J)

    for (int i = 0; i < 10; i++){    //Área da exibição do tabuleiro utilizando loops aninhados
        printf("%2d   ", i + 1);    //Adicionei cordenadas (1-10)
        for(int j = 0; j < 10; j++){
            
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }




return 0;
}