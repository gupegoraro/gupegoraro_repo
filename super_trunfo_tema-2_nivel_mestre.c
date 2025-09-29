#include <stdio.h>

int main(){
    // Variáveis do programa
    char state1, state2, codigo1[3], codigo2[3], nome1[23], nome2[23];
    int num_pontos1, num_pontos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2, superpoder1, superpoder2;

    // Dados referente a carta de número 01
    printf("Por favor insira os dados da carta de Número 1\n\n");

    printf("Estado: ");
    scanf(" %c", &state1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    // Calcular o Super Poder
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) num_pontos1 + pibPerCapita1 + (1 / densidade1);
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) num_pontos2 + pibPerCapita2 + (1 / densidade2);

    // Comparação das Cartas

    printf("\nResultados das Comparações:\n\n");

    if (populacao1 > populacao2){
        printf("População: Carta 1 Venceu! (%d)\n", populacao1 > populacao2);
    }else {
        printf("População: Carta 2 Venceu! (%d)\n", populacao1 > populacao2);
    };

    if (area1 > area2){
        printf("Área: Carta 1 Venceu! (%d)\n", area1 > area2);
    }else {
        printf("Área: Carta 2 Venceu! (%d)\n", area1 > area2);
    };

    if (pib1 > pib2){
        printf("PIB: Carta 1 Venceu! (%d)\n", pib1 > pib2);
    }else {
        printf("PIB: Carta 2 Venceu! (%d)\n", pib1 > pib2);
    };

    if (num_pontos1 > num_pontos2){
        printf("Pontos Turísticos: Carta 1 Venceu! (%d)\n", num_pontos1 > num_pontos2);
    }else {
        printf("Pontos Turísticos: Carta 2 Venceu! (%d)\n", num_pontos1 > num_pontos2);
    };

    if (densidade1 > densidade2){
        printf("Densidade Populacional: Carta 1 Venceu! (%d)\n", densidade1 > densidade2);
    }else {
        printf("Densidade Populacional: Carta 2 Venceu! (%d)\n", densidade1 > densidade2);
    };

    if (pibPerCapita1 > pibPerCapita2){
        printf("PIB per Capita: Carta 1 Venceu! (%d)\n", pibPerCapita1 > pibPerCapita2);
    }else {
        printf("PIB per Capita: Carta 2 Venceu! (%d)\n", pibPerCapita1 > pibPerCapita2);
    };

    if (superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 Venceu! (%d)\n", superpoder1 > superpoder2);
    }else {
        printf("Super Poder: Carta 2 Venceu! (%d)\n", superpoder1 > superpoder2);
    };
    
    return 0;

}