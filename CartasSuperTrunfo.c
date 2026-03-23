#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main(){

  char estado[20];
  char codigo_carta[20];
  char cidade [50];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;

  printf("=== CADASTRO DE CARTAS ===\n");

  // entrada de dados carta 1 
  printf("=== CADASTRO CARTA 1 === \n");

  // a função printf serve para interagir com o usuário e fazer com que ele digite o que está sendo solicitado
  // No scanf o programa irá ler o que foi escrito no print 
  // A linguagem C pede o & para retomar determinadas variáveis
  // utilizei o \n para pular 1 linha 
  printf("Digite o Estado: \n");
  scanf("%s", estado);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo_carta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Digite a população: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade: \n");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib);

  printf("Digite o nº de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos);

  // saída de dados carta 1
  // aqui, a função print irá imprimir (colocar na tela) o que foi salvo na função scanf
  // é necessário retomar o tipo primitivo colocado no topo do programa (ex: %s, %d etc.) e a variável determinada (ex: estado, cidade etc.)

  printf("=== DADOS CADASTRADOS ===");
  printf("Carta 1: \n");
  printf("Estado: %s \n", estado);
  printf("Código: %s \n", codigo_carta);
  printf("Cidade: %s \n", cidade);
  printf("População: %d de habitantes \n", populacao);
  printf("Área: %f Km² \n", area);
  printf("PIB: %f milhões de reais \n", pib);
  printf("Pontos turísticos: %d \n", pontos_turisticos);

  // entrada de dados carta 2 
  printf("=== Cadastro CARTA 2 === \n");

  printf("Digite o Estado: \n");
  scanf("%s", estado);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo_carta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Digite a população: \n");
  scanf("%d", &populacao);

  printf("Digite a área: \n");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib);

  printf("Digite o nº de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos);


  // saída de dados na CARTA 2
  printf("=== DADOS CADASTRADOS === \n");
  printf("CARTA 2: \n");
  printf("Estado: %s \n", estado);
  printf("Código da carta: %s \n", codigo_carta);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", populacao);
  printf("Área: %f \n", area);
  printf("PIB: %f \n", pib);
  printf("Pontos turísticos: %d \n", pontos_turisticos);

  printf("=== CADASTRO ENCERRADO COM SUCESSO ===");







  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;

} 


