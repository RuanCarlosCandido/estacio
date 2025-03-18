#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para comparar as cartas
void comparar_cartas(Carta carta1, Carta carta2, int opcao) {
    printf("\nComparação entre %s e %s\n", carta1.nome, carta2.nome);
    
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", carta1.nome, carta1.pib);
            printf("%s: %.2f trilhões\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Número de pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", carta1.nome, carta1.pontos_turisticos);
            printf("%s: %d pontos turísticos\n", carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.densidade_demografica > carta2.densidade_demografica) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    // Exemplo de cartas cadastradas
    Carta carta1 = {"Brasil", 214000000, 8515767, 2.05, 30, 25.1};
    Carta carta2 = {"Canadá", 38000000, 9984670, 1.64, 25, 3.8};

    int opcao;

    do {
        // Exibe o menu
        printf("\nEscolha um atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do jogo...\n");
            break;
        }

        comparar_cartas(carta1, carta2, opcao);
        
    } while (opcao != 0);

    return 0;
}
