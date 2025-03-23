#include <stdio.h>

// Constantes
#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

// Função principal
int main() {
    // Declaração e inicialização do tabuleiro
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Coordenadas iniciais dos navios
    int navioHorizontalLinha = 2;
    int navioHorizontalColuna = 3;

    int navioVerticalLinha = 5;
    int navioVerticalColuna = 7;

    // Validação simples dos limites do tabuleiro para o navio horizontal
    if (navioHorizontalColuna + TAM_NAVIO <= TAM_TABULEIRO) {
        // Posicionamento do navio horizontal
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] = 3;
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação simples dos limites do tabuleiro para o navio vertical
    if (navioVerticalLinha + TAM_NAVIO <= TAM_TABULEIRO) {
        // Verifica se não há sobreposição
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[navioVerticalLinha + i][navioVerticalColuna] == 3) {
                printf("Erro: Sobreposição detectada no posicionamento vertical.\n");
                return 1;
            }
        }

        // Posicionamento do navio vertical
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3;
        }
    } else {
        printf("Erro: Navio vertical fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Exibição do tabuleiro
    printf("Tabuleiro com os navios posicionados:\n\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
