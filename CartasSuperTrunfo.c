#include <stdio.h>

int main(){

// Variaveis para a primeira carta:

 char estado1[20], codigo_carta1[4],nome_cidade1[20];
 int populacao1, pontos_turisticos1;
 float area_km2_1, PIB1;

// Variaveis para a segunda carta:

char estado2[20], codigo_carta2[4], nome_cidade2[20];
int populacao2, pontos_turisticos2;
float area_km2_2, PIB2;

// Entrada de dados da primeira carta:

printf("Cadastro da carta 01:\n");

    printf("Estado (A-H): ");
    scanf(" %s", estado1);

    printf("Codigo: ");
    scanf(" %s", codigo_carta1);

    printf("Nome da cidade: ");
    scanf(" %s", nome_cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área em km²: ");
    scanf(" %f", &area_km2_1);

    printf("PIB: ");
    scanf(" %f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

// Entrada da segunda carta:

printf("cadastro da carta 02:\n");

    printf("Estado (A-H): ");
    scanf(" %s", estado2);

    printf("Codigo: ");
    scanf(" %s", codigo_carta2);

    printf("Nome da cidade:");
    scanf(" %s", nome_cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área em km²: ");
    scanf(" %f", &area_km2_2);

    printf("PIB: ");
    scanf(" %f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

// Exibição dos dados da primeira carta: 

    printf("\nDados da carta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area_km2_1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

// Exibição dos dados da segunda carta:

printf("\nDados da carta 02: \n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo_carta2);
printf("Nome da cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Área em km²: %.2f\n", area_km2_2);
printf("PIB: %.2f\n", PIB2);
printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
