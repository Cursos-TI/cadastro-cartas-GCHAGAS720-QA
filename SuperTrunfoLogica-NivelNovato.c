#include <stdio.h>

int main() {
    // ===============================
    // Cadastro das Cartas
    // ===============================

    // Variáveis da primeira carta
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePop1;
    float pibPerCapita1;

    // Variáveis da segunda carta
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePop2;
    float pibPerCapita2;

    // ===============================
    // Entrada de dados da Carta 1
    // ===============================
    printf("--- Carta 1 ---\n");
    printf("Digite a abreviação do Estado: ");
    scanf(" %s", estado1);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos automáticos da Carta 1
    densidadePop1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // ===============================
    // Entrada de dados da Carta 2
    // ===============================
    printf("\n--- Carta 2 ---\n");
    printf("Digite a abreviação do Estado: ");
    scanf(" %s", estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos automáticos da Carta 2
    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===============================
    // Exibição dos dados cadastrados
    // ===============================
    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\nCarta 1:\n");
    printf("%s (%s)\n", nomeCidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("%s (%s)\n", nomeCidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ===============================
    // Comparação de cartas
    // ===============================
    printf("\n--- COMPARAÇÃO DE CARTAS (Atributo: População) ---\n");

    // Aqui é onde você escolhe o atributo base para a disputa:
    // Exemplo: População
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("As duas cartas têm o mesmo valor de população (%lu). Empate!\n", populacao1);
    }

    return 0;
}
