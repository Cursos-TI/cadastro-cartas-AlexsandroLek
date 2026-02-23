#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, pontosturisticos1,
  populacao2, pontosturisticos2;

  float area1, pib1, densidade1, superpoder1, area2, pib2, densidade2, superpoder2, PIB1, PIB2;

  char pais[50] = "Brasil";
  char estado1[20], estado2[20], cidade1[20], cidade2[20], carta1[20], carta2[20], codigo1[20], codigo2[20];
  
  // Área para entrada de dados 

  // Carta 1
       printf("Escolha sua 1 carta: ");
       scanf("%s", carta1);

       printf("Estado: ");
       scanf(" %s", estado1);

       printf("Codigo: ");
       scanf(" %s", codigo1);

       printf("Cidade: ");
       scanf("%s", cidade1);

       printf("População:");
       scanf("%d", &populacao1);

       printf("Area:");
       scanf("%f", &area1);

       printf("Pib:");
       scanf("%f", &pib1);

       printf("Pontos Turisticos:");
       scanf("%d", &pontosturisticos1);

       // Carta 2
       printf("Escolha sua 2 carta: ");
       scanf("%s", carta2);

       printf("Estado: ");
       scanf(" %s", estado2);

       printf("Codigo: ");
       scanf(" %s", codigo2);

       printf("Cidade: ");
       scanf("%s", cidade2);

       printf("População:");
       scanf("%d", &populacao2);

       printf("Area:");
       scanf("%f", &area2);

       printf("Pib:");
       scanf("%f", &pib2);

       printf("Pontos Turisticos:");
       scanf("%d", &pontosturisticos2);

 // Exibição Carta 1

       printf("\nCarta 1: %s\n Estado: %s\n Codigo: %s\n Cidade: %s\n População: %d\n Area: %f\n Pib: %f\n Pontos Turisticos %d\n",
              carta1, estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1);

       densidade1 = populacao1 / area1;
       printf("Densidade Populacional: %.2f\n", densidade1);
       PIB1 = pib1 / populacao1;
       printf("PIB: %.2f\n", PIB1);
       superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + PIB1 + (1 / densidade1);
       printf("Super Poder 1: %.2f\n", superpoder1);

 // Exibição Carta 2

       printf("\nCarta 2: %s\n Estado: %s\n Codigo: %s\n Cidade: %s\n População: %d\n Area: %f\n Pib: %f\n Pontos Turisticos %d\n",
              carta2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2);

       densidade2 = populacao2 / area2;
       printf("Densidade Populacional: %.2f\n", densidade2);
       PIB2 = pib2 / populacao2;
       printf("PIB: %.2f\n", PIB2);
       superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + PIB2 + (1 / densidade2);
       printf("Super Poder 2: %.2f\n", superpoder2);
       
       
 
    return 0;
}
