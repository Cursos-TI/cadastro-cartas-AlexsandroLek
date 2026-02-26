#include <stdio.h>
 // Desafio Super Trunfo - Países
 int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;

    float area1, pib1, densidade1, pibPerCapita1, superpoder1;
    float area2, pib2, densidade2, pibPerCapita2, superpoder2;

    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];
    char carta1[20], carta2[20];
    char codigo1[20], codigo2[20];
    
    // ENTRADA CARTA 1
    
    printf("Escolha sua 1 carta: ");
    scanf("%s", carta1);

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    // ENTRADA CARTA 2
    
    printf("\nEscolha sua 2 carta: ");
    scanf("%s", carta2);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // CÁLCULOS CARTA 1
    
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    superpoder1 = (float) populacao1 +
                  area1 +
                  pib1 +
                  (float) pontosturisticos1 +
                  pibPerCapita1 +
                  (1.0 / densidade1);

    // CÁLCULOS CARTA 2
    
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    superpoder2 = (float) populacao2 +
                  area2 +
                  pib2 +
                  (float) pontosturisticos2 +
                  pibPerCapita2 +
                  (1.0 / densidade2);

    // COMPARAÇÃO
    
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);

    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
