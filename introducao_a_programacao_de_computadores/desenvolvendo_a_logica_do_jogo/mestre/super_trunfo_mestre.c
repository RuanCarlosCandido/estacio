#include <stdio.h>

// Estrutura para representar uma carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para exibir o menu de atributos
int escolher_atributo(int excluido) {
    int opcao;
    
    do {
        printf("\nEscolha um atributo para comparar:\n");
        if (excluido != 1) printf("1 - População\n");
        if (excluido != 2) printf("2 - Área\n");
        if (excluido != 3) printf("3 - PIB\n");
        if (excluido != 4) printf("4 - Número de pontos turísticos\n");
        if (excluido != 5) printf("5 - Densidade demográfica\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        if (opcao < 1 || opcao > 5 || opcao == excluido) {
            printf("Opção inválida. Escolha um atributo válido.\n");
        }
    } while (opcao < 1 || opcao > 5 || opcao == excluido);
    
    return opcao;
}

// Função para obter o valor do atributo selecionado
float obter_valor(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return carta.pontos_turisticos;
        case 5: return carta.densidade_demografica;
        default: return 0;
    }
}

// Função para determinar o vencedor de um atributo
int comparar_atributo(float valor1, float valor2, int atributo) {
    // Para densidade demográfica, o menor valor vence
    if (atributo == 5) {
        return (valor1 < valor2) ? 1 : (valor1 > valor2) ? 2 : 0;
    } else {
        return (valor1 > valor2) ? 1 : (valor1 < valor2) ? 2 : 0;
    }
}

// Função principal para comparar as cartas
void comparar_cartas(Carta carta1, Carta carta2) {
    printf("\nComparação entre %s e %s\n", carta1.nome, carta2.nome);

    // Escolher dois atributos diferentes
    int atributo1 = escolher_atributo(0);
    int atributo2 = escolher_atributo(atributo1);

    // Obter valores dos atributos escolhidos
    float valor1_carta1 = obter_valor(carta1, atributo1);
    float valor1_carta2 = obter_valor(carta2, atributo1);
    float valor2_carta1 = obter_valor(carta1, atributo2);
    float valor2_carta2 = obter_valor(carta2, atributo2);

    // Comparação individual dos atributos
    int resultado1 = comparar_atributo(valor1_carta1, valor1_carta2, atributo1);
    int resultado2 = comparar_atributo(valor2_carta1, valor2_carta2, atributo2);

    // Soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nResultados da Comparação:\n");
    printf("%s - %s: %.2f, %s: %.2f (Total: %.2f)\n", carta1.nome, 
           (atributo1 == 1 ? "População" : atributo1 == 2 ? "Área" : atributo1 == 3 ? "PIB" : atributo1 == 4 ? "Pontos turísticos" : "Densidade"),
           valor1_carta1, 
           (atributo2 == 1 ? "População" : atributo2 == 2 ? "Área" : atributo2 == 3 ? "PIB" : atributo2 == 4 ? "Pontos turísticos" : "Densidade"),
           valor2_carta1, soma1);

    printf("%s - %s: %.2f, %s: %.2f (Total: %.2f)\n", carta2.nome, 
           (atributo1 == 1 ? "População" : atributo1 == 2 ? "Área" : atributo1 == 3 ? "PIB" : atributo1 == 4 ? "Pontos turísticos" : "Densidade"),
           valor1_carta2, 
           (atributo2 == 1 ? "População" : atributo2 == 2 ? "Área" : atributo2 == 3 ? "PIB" : atributo2 == 4 ? "Pontos turísticos" : "Densidade"),
           valor2_carta2, soma2);

    // Determinar o vencedor final
    if (soma1 > soma2) {
        printf("Vencedor: %s\n", carta1.nome);
    } else if (soma1 < soma2) {
        printf("Vencedor: %s\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    // Cartas cadastradas
    Carta carta1 = {"Brasil", 214000000, 8515767, 2.05, 30, 25.1};
    Carta carta2 = {"Canadá", 38000000, 9984670, 1.64, 25, 3.8};

    int opcao;

    do {
        printf("\n===== SUPER TRUNFO =====\n");
        printf("1 - Jogar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                comparar_cartas(carta1, carta2);
                break;
            case 0:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
