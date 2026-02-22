#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, populacao2;
  int pontosturisticos1, pontosturisticos2, carta1, carta2;

  float pib1, pib2, area1, area2;
  float densidadepopulacional1, densidadepopulacional2;
  float pib1, pib2;
  float superpoder1, superpoder2;

  char pais[50] = "Brasil";
  char codigo1[20], codigo2[20];
  char estado1[20], estado2[20];
  char cidade1[20], cidade2[20];
  
  // Área para entrada de dados 
  
  // Carta 1
  
  printf("Escolha sua Carta: \n");
  scanf("%s", &carta1);

  printf("Codigo: \n");
  scanf("%s", &codigo1);

  printf("Estado: \n");
  scanf("%s", &estado1);

  printf("Cidade: \n");
  scanf("%s", &ciadade1);

  printf("Populacao: \n");
  scanf("%f", &populacao1);

  printf("Area: \n");
  scanf("%f", &area1);

  printf("Pib: \n");
  scanf("%f", &pib1);

  printf("Pontos Turisticos: \n");
  scanf("%d", &pontosturisticos1);
  
    // Carta 2
  
  printf("Escolha sua Carta: \n");
  scanf("%s", &carta2);

  printf("Codigo: \n");
  scanf("%s", &codigo2);

  printf("Estado: \n");
  scanf("%s", &estado2);

  printf("Cidade: \n");
  scanf("%s", &ciadade2);

  printf("Populacao: \n");
  scanf("%f", &populacao2);

  printf("Area: \n");
  scanf("%f", &area2);

  printf("Pib: \n");
  scanf("%f", &pib2);

  printf("Pontos Turisticos: \n");
  scanf("%d", &pontosturisticos2);
  // Área para exibição dos dados da cidade
  
  // Carta1
  printf("\nCarta1: %d\nCodigo: %s\nEstado: %s\nCidade1: %sPopulação: %f\nArea: %f\nPontosTuristicos: %d\n",
  Carta1, codigo1, estado1, ciadade1, populacao1, area1, pontosturisticos1);

  
return 0;
} 
