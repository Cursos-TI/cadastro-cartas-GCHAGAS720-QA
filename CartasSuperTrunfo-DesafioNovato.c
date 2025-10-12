#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;

    // Variáveis da segunda carta
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Digite a abreviação do Estado: ");
    scanf(" %s", estado1);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%lf", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Digite a abreviação do Estado: ");
    scanf(" %s", estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%lf", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}

