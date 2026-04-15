#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo 2: Calcular PIB e densidade populacional e incluir no cadastro de cartas. 
int main(){

  char estado[20];
  char codigo_carta[20];
  char cidade [50];
  unsigned long int populacao;
  float area;
  float pib;
  int pontos_turisticos;
  float densidade_populacional;
  double pib_per_capita;

  //variaveis replicadas para poder fazer a comparação
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  double pib_per_capita2;


  // NIVEL NOVATO
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
  scanf(" %d", &populacao);

  printf("Digite a área da cidade: \n");
  scanf(" %f", &area);

  printf("Digite o PIB da cidade: \n");
  scanf(" %f", &pib);

  printf("Digite o nº de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos);

  // cálculo da densidade, utilizando as variáveis populacao e area do exercicio anterior

  densidade_populacional= (float) populacao / area; 

  // cálculo do PIB per capita 

  pib_per_capita = pib / (float) populacao;

 




  // saída de dados carta 1
  // aqui, a função print irá imprimir (colocar na tela) o que foi salvo na função scanf
  // é necessário retomar o tipo primitivo colocado no topo do programa (ex: %s, %d etc.) e a variável determinada (ex: estado, cidade etc.)

  printf("=== DADOS CADASTRADOS \n===");

  printf("Carta 1: \n");
  printf("Estado: %s \n", estado);
  printf("Código: %s \n", codigo_carta);
  printf("Cidade: %s \n", cidade);
  printf("População: %d de habitantes \n", populacao);
  printf("Área: %f Km² \n", area);
  printf("PIB: %f milhões de reais \n", pib);
  printf("Pontos turísticos: %d \n", pontos_turisticos);
  printf("Densidade populacional: %f\n", densidade_populacional);
  printf("PIB per capita: %f\n", pib_per_capita);

  //NIVEL MESTRE
  //soma dos atributos das cartas 
  float somaCarta1; 
  float superpoderCarta1;

  somaCarta1 = populacao + pib + area + pib_per_capita + densidade_populacional + pontos_turisticos;
  superpoderCarta1 = somaCarta1;

  printf("Soma Carta 1: %f\n", somaCarta1);


  // entrada de dados carta 2 
  printf("=== Cadastro CARTA 2 === \n");

  printf("Digite o Estado: \n");
  scanf("%s", estado);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo_carta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Digite a população: \n");
  scanf(" %d", &populacao2);

  printf("Digite a área: \n");
  scanf(" %f", &area2);

  printf("Digite o PIB da cidade: \n");
  scanf(" %f", &pib2);

  printf("Digite o nº de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos2);


  //NIVEL INTERMEDIARIO 
  // cálculo da densidade, utilizando as variáveis populacao e area do exercicio anterior

  densidade_populacional= (float)populacao2 / area2; 

  // cálculo do PIB per capita 

  pib_per_capita = pib2 / (float)populacao2;



  // saída de dados na CARTA 2
  printf("=== DADOS CADASTRADOS === \n");
  printf("CARTA 2: \n");
  printf("Estado: %s \n", estado);
  printf("Código da carta: %s \n", codigo_carta);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", populacao2);
  printf("Área: %f \n", area2);
  printf("PIB: %f \n", pib2);
  printf("Pontos turísticos: %d \n", pontos_turisticos2);
  printf("Densidade populacional: %f\n", densidade_populacional2);
  printf("PIB per capita: %f\n", pib_per_capita2);

  //NIVEL MESTRE 
  float somaCarta2;
  float superpoderCarta2; 
  somaCarta2 = (float) populacao + pib + area + pib_per_capita + densidade_populacional + (float) pontos_turisticos;
  superpoderCarta2 = somaCarta2;
  printf("Soma Carta 2: %f\n", somaCarta2);

  //COMPARAÇÃO ENTRE AS CARTAS

  //DECLARAÇÃO DAS VARIAVEIS
  int resultadopopulaçao;
  int resultadoarea;
  int resultadopib;
  int resultadopontosturisticos;
  int resultadodensidadepopulacional;
  int resultadopibpercapita;
  int resultadosuperpoder;

  //COMPARAÇÃO ENTRE CADA ATRIBUTO
  resultadopopulaçao = populacao > populacao2;
  resultadoarea = area > area2;
  resultadopib = pib > pib2;
  resultadopontosturisticos = pontos_turisticos > pontos_turisticos2;
  resultadodensidadepopulacional = densidade_populacional < densidade_populacional2;
  resultadopibpercapita = pib_per_capita > pib_per_capita2;
  resultadosuperpoder = superpoderCarta1 > superpoderCarta2;

  //PRINT COM O RESULTADO 
  printf("População: Carta 1 venceu. %d\n", resultadopopulaçao);
  printf("Area: Carta 1 venceu. %d\n", resultadoarea);
  printf("Pib: Carta 1 venceu. %d\n", resultadopib);
  printf("Pontos turísticos: Carta 1 venceu. %d\n", resultadopontosturisticos);
  printf("Densidade populacional: Carta 1 venceu. %d\n", resultadodensidadepopulacional);
  printf("Pib Per Capita: Carta 1 venceu. %d\n", resultadopibpercapita);
  printf("Super Poder: Carta 1 venceu. %d\n", resultadosuperpoder);
  


  printf("=== FIM ===");










return 0;

} 


} 


