#include <stdio.h>

int main(){
    // Dados das cartas:
    unsigned long int populacao1, populacao2;
    char estado1[20], codigo1[4], nome_cidade1[50];
    char estado2[20], codigo2[4], nome_cidade2[50];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, densidade_populacional1;
    float area2, pib2, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float superpoder1, superpoder2;

    // Entrada de dados da primeira carta:
    printf("Cadastro da Carta 01:\n");
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade1);;
    printf("População: ");
    scanf(" %lu", &populacao1);
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
    scanf(" %lu", &populacao2);
    printf("Área em km²: ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculo de densidade:
    densidade_populacional1 = area1 > 0 ? populacao1 / area1 : 0;
    densidade_populacional2 = area2 > 0 ? populacao2 / area2 : 0;

    // Cálculo do PIB per capita (convertendo bilhões para reais):
    pib_per_capita1 = pib1 * 1000000000 / populacao1;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // Cálculo do inverso da densidade:
    float inverso_densidade1 = (densidade_populacional1 != 0) ? 1.0f/densidade_populacional1 :0;
    float inverso_densidade2 = (densidade_populacional2 != 0) ? 1.0f/densidade_populacional2 :0;

    // Cálculo do Super Poder:
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;

    // Exibição dos dados da primeira carta:
    printf("\nDados da Carta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
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
    printf("População: %lu\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparações
    int resultado_populacao = (populacao1 > populacao2);
    int resultado_area = (area1 > area2);
    int resultado_pib = (pib1 > pib2);
    int resultado_pontos = (pontos_turisticos1 > pontos_turisticos2);
    int resultado_densidade = (densidade_populacional1 < densidade_populacional2);
    int resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2);
    int resultado_superpoder = (superpoder1 > superpoder2);
    
    // Exibição das comparações:
    printf("\nComparação de Cartas:\n");
    printf("População: %s (%d)\n", resultado_populacao ? "Carta 1 venceu" : "Carta 2 venceu", resultado_populacao);
    printf("Área: %s (%d)\n", resultado_area ? "Carta 1 venceu" : "Carta 2 venceu", resultado_area);
    printf("PIB: %s (%d)\n", resultado_pib ? "Carta 1 venceu" : "Carta 2 venceu", resultado_pib);
    printf("Pontos Turísticos: %s (%d)\n", resultado_pontos ? "Carta 1 venceu" : "Carta 2 venceu", resultado_pontos);
    printf("Densidade Populacional: %s (%d)\n", resultado_densidade ? "Carta 1 venceu" : "Carta 2 venceu", resultado_densidade);
    printf("PIB per Capita: %s (%d)\n", resultado_pib_per_capita ? "Carta 1 venceu" : "Carta 2 venceu", resultado_pib_per_capita);
    printf("Super Poder: %s (%d)\n", resultado_superpoder ? "Carta 1 venceu" : "Carta 2 venceu", resultado_superpoder);

    return 0;
}