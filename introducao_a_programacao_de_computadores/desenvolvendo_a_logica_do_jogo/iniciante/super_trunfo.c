#include <stdio.h>
#include <string.h>

// Definindo a estrutura para uma carta Super Trunfo
typedef struct {
    char estado[50];
    char codigoCarta[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular Densidade Populacional e PIB per capita
void calcularAtributos(Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

int main() {
    // Dados da carta 1
    Carta carta1 = {
        "São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699000.00, 10
    };
    calcularAtributos(&carta1);

    // Dados da carta 2
    Carta carta2 = {
        "Rio de Janeiro", "RJ01", "Rio de Janeiro", 6000000, 1182.30, 364000.00, 12
    };
    calcularAtributos(&carta2);

    // Escolha o atributo para comparação diretamente aqui
    // Opções: populacao, area, pib, densidadePopulacional, pibPerCapita
    char atributoComparacao[] = "populacao";

    printf("Comparação de cartas (Atributo: %s):\n\n", atributoComparacao);

    // Exibindo os valores das duas cartas e comparando com base no atributo escolhido
    if (strcmp(atributoComparacao, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta1.populacao < carta2.populacao)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }
    else if (strcmp(atributoComparacao, "densidadePopulacional") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);

        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta1.densidadePopulacional > carta2.densidadePopulacional)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }
    else if (strcmp(atributoComparacao, "pibPerCapita") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta1.pibPerCapita < carta2.pibPerCapita)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("\nResultado: Empate!\n");
    }
    // Implementar outras comparações similares caso necessário...

    return 0;
}
