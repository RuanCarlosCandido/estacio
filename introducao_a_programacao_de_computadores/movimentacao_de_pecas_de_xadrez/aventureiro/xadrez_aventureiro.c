#include <stdio.h>

int main() {
    // Movimento da Torre (for loop)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (while loop)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (do-while loop)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    
    printf("\n");

    // Movimento do Cavalo (loops aninhados: for + while)
    printf("Movimento do Cavalo:\n");
    
    // Loop aninhado para o movimento do Cavalo
    for (int l = 0; l < 2; l++) {
        printf("Baixo\n");
        int m = 0;
        while (m < 1 && l == 1) { // A esquerda só ocorre depois dos dois passos para baixo
            printf("Esquerda\n");
            m++;
        }
    }
    
    return 0;
}
