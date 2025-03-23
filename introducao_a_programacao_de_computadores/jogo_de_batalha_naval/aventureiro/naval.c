#include <stdio.h>

// Constantes
#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

// Verifica se a posição está dentro dos limites
int validaPosicao(int linha, int coluna) {
    return linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO;
}

// Função principal
int main() {
    // Inicializa tabuleiro com água
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Navios horizontais e verticais
    int navioH_L = 1, navioH_C = 1;
    int navioV_L = 5, navioV_C = 8;

    // Navios diagonais
    int navioD1_L = 0, navioD1_C = 7;  // diagonal descendo direita
    int navioD2_L = 8, navioD2_C = 0;  // diagonal subindo direita

    // Posiciona navio horizontal
    if (validaPosicao(navioH_L, navioH_C + TAM_NAVIO - 1)) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioH_L][navioH_C + i] = 3;
        }
    }

    // Posiciona navio vertical
    if (validaPosicao(navioV_L + TAM_NAVIO - 1, navioV_C)) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioV_L + i][navioV_C] = 3;
        }
    }

    // Posiciona navio diagonal descendo à direita
    if (validaPosicao(navioD1_L + TAM_NAVIO - 1, navioD1_C + TAM_NAVIO - 1)) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioD1_L + i][navioD1_C + i] = 3;
        }
    }

    // Posiciona navio diagonal subindo à direita
    if (validaPosicao(navioD2_L - (TAM_NAVIO - 1), navioD2_C + TAM_NAVIO - 1)) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioD2_L - i][navioD2_C + i] = 3;
        }
    }

    // Exibe tabuleiro
    printf("Tabuleiro Completo:\n\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}