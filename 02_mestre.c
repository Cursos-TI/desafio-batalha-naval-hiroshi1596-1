//Desafio - Jogo de Batalha Naval - Nível Mestre
#include <stdio.h>

//Declarando as (Constantes Símbolicas)
#define LINHAS 10 
#define COLUNAS 10
#define NAVIO 3

int main(){
    
     int  tabuleiro[LINHAS][COLUNAS] = {0}; //Área do tabuleiro 10x10 utilizando uma Matriz (array bidimensional)

    int navioHorizontal[NAVIO] = {3, 3, 3};  //Três posições horizontal todas declaradas pelo numero 3 utilizando Vetores(array unidimensional) 
    int navioVertical[NAVIO] = {3, 3, 3};  //Três posições vertical todas declaradas pelo numero 3 utilizando Vetores(array unidimensional) 
    int navioDiagonal1[NAVIO] = {3, 3, 3};  //Três posições diagonal todas declaradas pelo numero 3 utilizando Vetores(array unidimensional)
    int navioDiagonal2[NAVIO] = {3, 3, 3};  //Três posições diagonal todas declaradas pelo numero 3 utilizando Vetores(array unidimensional)

    int linhaH = 3, colunaH = 0;   //Declarando a posição do navio horizontal
    for (int i = 0; i < NAVIO; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    int linhaV = 7, colunaV = 7;   //Declarando a posição do navio vertical
    for (int j = 0; j < NAVIO; j++){
        tabuleiro[linhaV + j][colunaV] = navioVertical[j];
    }

    int linhaD1 = 1, colunaD1 = 6;    //Declarando a posição do primeiro navio diagonal
    for (int k = 0; k < NAVIO; k++){
        tabuleiro[linhaD1 + k][colunaD1 + k] = navioDiagonal1[k];
    }

    int linhaD2 = 8, colunaD2 = 2;    //Declarando a posição do segundo navio diagonal
    for (int l = 0; l < NAVIO; l++){
        tabuleiro[linhaD2 - l][colunaD2 + l] = navioDiagonal2[l];
    }

    // --- ADIÇÃO DAS HABILIDADES ESPECIAIS (NÍVEL MESTRE) ---

    // Definindo matrizes de habilidade 5x5 para exemplificar a forma
    // 1 representa área afetada, 0 representa neutro
    int cone[5][5] = {0}, cruz[5][5] = {0}, octaedro[5][5] = {0};

    // Criando a matriz CONE (Formato de triângulo para baixo)
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == 0 && j == 2) cone[i][j] = 1;
            if(i == 1 && j >= 1 && j <= 3) cone[i][j] = 1;
            if(i == 2) cone[i][j] = 1;
        }
    }

    // Criando a matriz CRUZ
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == 2 || j == 2) cruz[i][j] = 1;
        }
    }

    // Criando a matriz OCTAEDRO (Losango)
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if((i == 2 && j >= 1 && j <= 3) || (j == 2 && i >= 1 && i <= 3)) octaedro[i][j] = 1;
        }
    }

    // Sobrepondo as habilidades no tabuleiro principal (valor 5 para habilidade)
    // Definindo pontos de origem (centro da matriz 5x5 no tabuleiro)
    int origemConeL = 2, origemConeC = 2;
    int origemCruzL = 6, origemCruzC = 5;
    int origemOctaL = 1, origemOctaC = 8;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // Aplicando Cone
            int l = origemConeL + i - 2, c = origemConeC + j - 2;
            if(l >= 0 && l < LINHAS && c >= 0 && c < COLUNAS && cone[i][j] == 1) tabuleiro[l][c] = 5;

            // Aplicando Cruz
            l = origemCruzL + i - 2, c = origemCruzC + j - 2;
            if(l >= 0 && l < LINHAS && c >= 0 && c < COLUNAS && cruz[i][j] == 1) tabuleiro[l][c] = 5;

            // Aplicando Octaedro
            l = origemOctaL + i - 2, c = origemOctaC + j - 2;
            if(l >= 0 && l < LINHAS && c >= 0 && c < COLUNAS && octaedro[i][j] == 1) tabuleiro[l][c] = 5;
        }
    }

    // --- EXIBIÇÃO FINAL ---
    printf("### Tabuleiro Batalha Naval - Nivel Mestre ###\n\n");
    printf("     A B C D E F G H I J\n\n");  //Cordenadas para as colunas do tabuleiro de (A a J)

    for (int i = 0; i < LINHAS; i++){
        printf("%2d   ", i + 1);   //Adicionei cordenadas para as linhas (1-10)
        for(int j = 0; j < COLUNAS; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
