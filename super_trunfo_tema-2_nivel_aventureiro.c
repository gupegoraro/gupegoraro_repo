#include <stdio.h>

int main(){
    // Variáveis do programa
    char state1, state2, codigo1[3], codigo2[3], nome1[23], nome2[23];
    int populacao1, populacao2, num_pontos1, num_pontos2;
    float area1, area2,  densidade1, densidade2, pib1, pib2, pibPerCapita1, pibPerCapita2;

    // Dados referente a carta de número 01
    printf("Por favor insira os dados da carta de Número 1\n\n");

    printf("Estado: ");
    scanf(" %c", &state1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pontos1);

    // Dados referente a carta de número 02
    printf("\n\nAgora, os dados da carta de Número 2\n\n");

    printf("Estado: ");
    scanf(" %c", &state2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pontos2);

    // Cálculos das densidades e PIB per Capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Abaixo função de impressão dos dados inseridos
    printf("\nAbaixo os dados inseridos nas cartas\n\n");
    printf("Carta Número 1:\n");
    printf("Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n", state1, codigo1, nome1, populacao1, area1, pib1, num_pontos1, densidade1, pibPerCapita1);
    printf("Carta Número 2:\n");
    printf("Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n", state2, codigo2, nome2, populacao2, area2, pib2, num_pontos2, densidade2, pibPerCapita2);
    
    return 0;

}