#include <stdio.h>

int main() {
    //Variaveis da primeira carta
    char estado1[2];
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Variaveis da segunda carta
    char estado2[2];
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1 
    printf("--- Carta 1 ---\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    //  Entrada de dados da Carta 2 
    printf("\n--- Carta 2 ---\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados 
    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

return 0;

} 
