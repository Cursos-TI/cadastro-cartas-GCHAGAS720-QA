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
    printf("--- Cadastro da Carta 1 ---\n");
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
    printf("\n--- Cadastro da Carta 2 ---\n");
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

    printf("\nCarta 1: %s (%s)\n", nomeCidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2: %s (%s)\n", nomeCidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // ===============================
    // Menu de comparação interativo
    // ===============================
    int opcao;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar (1-5): ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO ---\n");
 // ===============================
    // Verificação do Super Poder
    // ===============================
    if (codigo1[0] == 'A' && codigo2[0] != 'A') {
        printf("Super Poder ativado! Carta 1 (%s) venceu automaticamente!\n", nomeCidade1);
    } else if (codigo2[0] == 'A' && codigo1[0] != 'A') {
        printf("Super Poder ativado! Carta 2 (%s) venceu automaticamente!\n", nomeCidade2);
    } else {
        // ===============================
        // Comparações normais via switch
        // ===============================
        switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedora: %s (%s)\n", nomeCidade1, estado1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Vencedora: %s (%s)\n", nomeCidade1, estado1);
            } else if (area2 > area1) {
                printf("Vencedora: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedora: %s (%s)\n", nomeCidade1, estado1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedora: %s (%s)\n", nomeCidade1, estado1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedora: %s (%s)\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidadePop1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePop2);
            if (densidadePop1 < densidadePop2) {
                printf("Vencedora: %s (%s) - menor densidade\n", nomeCidade1, estado1);
            } else if (densidadePop2 < densidadePop1) {
                printf("Vencedora: %s (%s) - menor densidade\n", nomeCidade2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
