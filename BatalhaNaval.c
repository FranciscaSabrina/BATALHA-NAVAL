#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Inicializa todas as posições do tabuleiro com 0 (água)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Imprime o tabuleiro na tela
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Verifica se é possível posicionar o navio (horizontal ou vertical)
int podePosicionarHV(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                     int linha, int coluna, char orientacao) {
    if (orientacao == 'H') {
     } else { (coluna + TAMANHO_NAVIO > TA_ }