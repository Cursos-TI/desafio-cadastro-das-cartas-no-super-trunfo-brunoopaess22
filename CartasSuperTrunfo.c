#include <stdio.h>

int main() {
    // =============================
    // Declaração das variáveis
    // =============================

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // =============================
    // Cadastro da Carta 1
    // =============================
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // =============================
    // Cadastro da Carta 2
    // =============================
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // =============================
    // Exibição dos dados
    // =============================
    printf("\n====================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n====================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
