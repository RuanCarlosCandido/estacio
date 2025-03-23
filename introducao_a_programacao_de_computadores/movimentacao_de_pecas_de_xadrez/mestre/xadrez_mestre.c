#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispoRec(int passos) {
    if (passos == 0) return;
    printf("Cima, Direita\n");
    moverBispoRec(passos - 1);
}

// Função para movimentar o Bispo com loops aninhados
void moverBispoLoop(int passos) {
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

// Função recursiva para movimentar a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Movimento da Torre (recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (recursividade)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRec(5);
    printf("\n");

    // Movimento do Bispo (loops aninhados)
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoLoop(5);
    printf("\n");

    // Movimento da Rainha (recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (loops aninhados + múltiplas condições)
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            if (i == 1) {
                printf("Direita\n");
                break;
            }
        }
    }
    
    return 0;
}
