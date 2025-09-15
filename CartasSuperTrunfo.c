#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codCarta[5];
  char nomeCidade[50];
  int populacao;
  float areaKm;
  float pib;
  int numPontosTuristicos;

  // Área para entrada de dados
  // Carta 1
  printf("Carta 1: \n");
  printf("Digite o estado (sigla): \n");
  scanf(" %c", &estado);

  printf("Digite o Código: \n");
  scanf("%s", codCarta);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", nomeCidade);

  printf("Digite a População: \n");
  scanf("%d", &populacao);

  printf("Digite a Área: \n");
  scanf("%f", &areaKm);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &numPontosTuristicos);

  // Carta 2
  char estado2;
  char codCarta2[5];
  char nomeCidade2[50];
  int populacao2;
  float areaKm2;
  float pib2;
  int numPontosTuristicos2;

  printf("Carta 2: \n");
  printf("Digite o estado (sigla): \n");
  scanf(" %c", &estado2);

  printf("Digite o Código: \n");
  scanf("%s", codCarta2);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", nomeCidade2);

  printf("Digite a População: \n");
  scanf("%d", &populacao2);

  printf("Digite a Área: \n");
  scanf("%f", &areaKm2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &numPontosTuristicos2);

  // Área para exibição dos dados
  printf("As cartas foram cadastradas com sucesso!\n");
  printf("Carta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Código: %c\n", codCarta);
  printf("Nome da Cidade: %c\n", nomeCidade);
  printf("População: %c\n", populacao);
  printf("Área: %c km²\n", areaKm);
  printf("PIB: %c bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %c\n", numPontosTuristicos);

  // Área para exibição dos dados
  printf("As cartas foram cadastradas com sucesso!\n");
  printf("Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c\n", codCarta2);
  printf("Nome da Cidade: %c\n", nomeCidade2);
  printf("População: %c\n", populacao2);
  printf("Área: %c km²\n", areaKm2);
  printf("PIB: %c bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %c\n", numPontosTuristicos2);
}
