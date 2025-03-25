#include <stdio.h>

int main(){
    // Dados das cartas:
    char estado1[20], codigo1[4], nome_cidade1[50];
    char estado2[20], codigo2[4], nome_cidade2[50];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, densidade_populacional1;
    float area2, pib2, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Entrada de dados da primeira carta:
    printf("Cadastro da Carta 01:\n");
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", nome_cidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área em km²: ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Entrada de dados da segunda carta:
    printf("\nCadastro da Carta 02:\n");
    printf("Estado: ");
    scanf(" %s", estado2);
    printf("Código: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", nome_cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área em km²: ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculo de densidade populacional e PIB per capita:
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // PIB convertido de bilhões para reais
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // Exibição dos dados da primeira carta:
    printf("\nDados da Carta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta:
    printf("\nDados da Carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
