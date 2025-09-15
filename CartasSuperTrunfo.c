#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Configuração para exibir caracteres especiais
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado;
  char codCarta[5];
  char nomeCidade[50];
  int populacao;
  float areaKm;
  float pib;
  int numPontosTuristicos;
  float densidadePopulacional;
  float pibPerCapita;

  // Carta 2
  char estado2;
  char codCarta2[5];
  char nomeCidade2[50];
  int populacao2;
  float areaKm2;
  float pib2;
  int numPontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

  // Área para entrada de dados
  // Carta 1
  printf("Carta 1: \n");
  printf("Digite o estado (sigla):\n");
  scanf(" %c", &estado);

  printf("Digite o Código:\n");
  scanf("%s", codCarta);

  printf("Digite o Nome da Cidade:\n");
  scanf("%s", nomeCidade);

  printf("Digite a Populacao:\n");
  scanf("%d", &populacao);

  printf("Digite a Area:\n");
  scanf("%f", &areaKm);

  printf("Digite o PIB:\n");
  scanf("%f", &pib);

  printf("Digite o Numero de Pontos Turisticos:\n");
  scanf("%d", &numPontosTuristicos);

  densidadePopulacional = populacao / areaKm;
  pib *= 1e6;
  pibPerCapita = (float) pib / populacao;

  // Carta 2
  printf("Carta 2: \n");
  printf("Digite o estado (sigla):\n");
  scanf(" %c", &estado2);

  printf("Digite o Código:\n");
  scanf("%s", codCarta2);

  printf("Digite o Nome da Cidade:\n");
  scanf(" %s", nomeCidade2);

  printf("Digite a Populacao:\n");
  scanf("%d", &populacao2);

  printf("Digite a Area:\n");
  scanf("%f", &areaKm2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib2);

  printf("Digite o Numero de Pontos Turisticos:\n");
  scanf("%d", &numPontosTuristicos2);

  densidadePopulacional2 = populacao2 / areaKm2;
  pib2 *= 1e6;
  pibPerCapita2 = (float) pib2 / populacao2;

  // Área para exibição dos dados Carta 1
  printf("As cartas foram cadastradas com sucesso!\n");
  printf("Carta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codCarta);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", areaKm);
  printf("PIB: %f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);
  printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional);
  printf("PIB per Capita: %f reais\n", pibPerCapita);

  // Área para exibição dos dados Carta 2
  printf("Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", areaKm2);
  printf("PIB: %f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
  printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %f reais\n", pibPerCapita2);
}
