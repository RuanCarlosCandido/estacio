#include <stdio.h>
#include <stdlib.h>
#define TABULEIRO 10
#define HABILIDADE 5

// Inicializa o tabuleiro com água (0)
void inicializaTabuleiro(int tab[TABULEIRO][TABULEIRO]) {
    for (int i = 0; i < TABULEIRO; i++)
        for (int j = 0; j < TABULEIRO; j++)
            tab[i][j] = 0;
}

// Exibe o tabuleiro com caracteres especiais
void exibeTabuleiro(int tab[TABULEIRO][TABULEIRO]) {
    for (int i = 0; i < TABULEIRO; i++) {
        for (int j = 0; j < TABULEIRO; j++) {
            if (tab[i][j] == 0) printf("~ ");
            else if (tab[i][j] == 3) printf("N ");
            else if (tab[i][j] == 5) printf("* ");
        }
        printf("\n");
    }
}

// Coloca um navio no tabuleiro
void colocaNavio(int tab[TABULEIRO][TABULEIRO], int x, int y) {
    tab[x][y] = 3;
}

// Aplica a habilidade no tabuleiro
void aplicaHabilidade(int tab[TABULEIRO][TABULEIRO], int hab[HABILIDADE][HABILIDADE], int origemX, int origemY) {
    int meio = HABILIDADE / 2;
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            int x = origemX + i - meio;
            int y = origemY + j - meio;
            if (x >= 0 && x < TABULEIRO && y >= 0 && y < TABULEIRO && hab[i][j] == 1) {
                if (tab[x][y] != 3) tab[x][y] = 5;
            }
        }
    }
}

// Preenche matrizes de habilidades
void criaCone(int hab[HABILIDADE][HABILIDADE]) {
    for (int i = 0; i < HABILIDADE; i++)
        for (int j = 0; j < HABILIDADE; j++)
            hab[i][j] = (i >= j && i + j >= HABILIDADE - 1) ? 1 : 0;
}

void criaCruz(int hab[HABILIDADE][HABILIDADE]) {
    int meio = HABILIDADE / 2;
    for (int i = 0; i < HABILIDADE; i++)
        for (int j = 0; j < HABILIDADE; j++)
            hab[i][j] = (i == meio || j == meio) ? 1 : 0;
}

void criaOctaedro(int hab[HABILIDADE][HABILIDADE]) {
    int meio = HABILIDADE / 2;
    for (int i = 0; i < HABILIDADE; i++)
        for (int j = 0; j < HABILIDADE; j++)
            hab[i][j] = (abs(meio - i) + abs(meio - j) <= meio) ? 1 : 0;
}

int main() {
    int tab[TABULEIRO][TABULEIRO];
    int habCone[HABILIDADE][HABILIDADE];
    int habCruz[HABILIDADE][HABILIDADE];
    int habOctaedro[HABILIDADE][HABILIDADE];

    inicializaTabuleiro(tab);

    // Coloca alguns navios para demonstrar
    colocaNavio(tab, 4, 4);
    colocaNavio(tab, 2, 2);
    colocaNavio(tab, 7, 7);

    // Cria habilidades
    criaCone(habCone);
    criaCruz(habCruz);
    criaOctaedro(habOctaedro);

    // Aplica habilidades em posições diferentes
    aplicaHabilidade(tab, habCone, 2, 7);
    aplicaHabilidade(tab, habCruz, 5, 5);
    aplicaHabilidade(tab, habOctaedro, 8, 2);

    // Exibe o resultado
    printf("Tabuleiro com habilidades especiais:\n\n");
    exibeTabuleiro(tab);

    return 0;
}