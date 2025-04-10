#include <stdio.h>

struct Cidade {
    char estado[30];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

float calcularDensidade(int populacao, float area) {
    return populacao / area;
}

int main() {
    struct Cidade cidade1, cidade2;
    int opcaoComparacao;

    printf("Cadastro da Cidade 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", cidade1.estado);
    printf("Codigo da Carta: ");
    scanf(" %[^\n]", cidade1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1.nome);
    printf("Populacao: ");
    scanf("%d", &cidade1.populacao);
    printf("Area (km2): ");
    scanf("%f", &cidade1.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &cidade1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &cidade1.pontosTuristicos);

    printf("\n");

    printf("Cadastro da Cidade 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", cidade2.estado);
    printf("Codigo da Carta: ");
    scanf(" %[^\n]", cidade2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("Populacao: ");
    scanf("%d", &cidade2.populacao);
    printf("Area (km2): ");
    scanf("%f", &cidade2.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &cidade2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &cidade2.pontosTuristicos);

    printf("\n--- Cartas Cadastradas ---\n");
    printf("\nCidade 1: %s (%s - %s)\n", cidade1.nome, cidade1.estado, cidade1.codigo);
    printf("Populacao: %d\n", cidade1.populacao);
    printf("Area: %.2f km2\n", cidade1.area);
    printf("PIB: %.2f bilhoes\n", cidade1.pib);
    printf("Pontos Turisticos: %d\n", cidade1.pontosTuristicos);

    printf("\nCidade 2: %s (%s - %s)\n", cidade2.nome, cidade2.estado, cidade2.codigo);
    printf("Populacao: %d\n", cidade2.populacao);
    printf("Area: %.2f km2\n", cidade2.area);
    printf("PIB: %.2f bilhoes\n", cidade2.pib);
    printf("Pontos Turisticos: %d\n", cidade2.pontosTuristicos);

    printf("\n--- Escolha o atributo para comparacao ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (MENOR valor vence)\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcaoComparacao);

    printf("\n--- Resultado da Comparacao ---\n");

    switch (opcaoComparacao) {
        case 1:
            if (cidade1.populacao > cidade2.populacao) {
                printf("Vencedora: %s (maior populacao)\n", cidade1.nome);
            } else if (cidade1.populacao < cidade2.populacao) {
                printf("Vencedora: %s (maior populacao)\n", cidade2.nome);
            } else {
                printf("Empate na populacao.\n");
            }
            break;
        case 2:
            if (cidade1.area > cidade2.area) {
                printf("Vencedora: %s (maior area)\n", cidade1.nome);
            } else if (cidade1.area < cidade2.area) {
                printf("Vencedora: %s (maior area)\n", cidade2.nome);
            } else {
                printf("Empate na area.\n");
            }
            break;
        case 3:
            if (cidade1.pib > cidade2.pib) {
                printf("Vencedora: %s (maior PIB)\n", cidade1.nome);
            } else if (cidade1.pib < cidade2.pib) {
                printf("Vencedora: %s (maior PIB)\n", cidade2.nome);
            } else {
                printf("Empate no PIB.\n");
            }
            break;
        case 4:
            if (cidade1.pontosTuristicos > cidade2.pontosTuristicos) {
                printf("Vencedora: %s (mais pontos turisticos)\n", cidade1.nome);
            } else if (cidade1.pontosTuristicos < cidade2.pontosTuristicos) {
                printf("Vencedora: %s (mais pontos turisticos)\n", cidade2.nome);
            } else {
                printf("Empate nos pontos turisticos.\n");
            }
            break;
        case 5: {
            float densidade1 = calcularDensidade(cidade1.populacao, cidade1.area);
            float densidade2 = calcularDensidade(cidade2.populacao, cidade2.area);
            printf("Densidade de %s: %.2f hab/km2\n", cidade1.nome, densidade1);
            printf("Densidade de %s: %.2f hab/km2\n", cidade2.nome, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedora: %s (menor densidade populacional)\n", cidade1.nome);
            } else if (densidade1 > densidade2) {
                printf("Vencedora: %s (menor densidade populacional)\n", cidade2.nome);
            } else {
                printf("Empate na densidade populacional.\n");
            }
            break;
        }
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
