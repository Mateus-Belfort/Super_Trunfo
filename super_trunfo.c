#include  <stdio.h>

int main(){

  //Carta 01
  char carta1;
  char cod_carta1[5];
  char nome_cidade1[50];
  int populacao1, pontos_turismo1;
  float area1, pib1;  
  float densidade1;
  float percapta1;
  

  //Carta 2
  char carta2;
  char cod_carta2[5];
  char nome_cidade2[50];
  int populacao2, pontos_turismo2;
  float area2, pib2; 
  
  float densidade2;
  float percapta2;


  //Dados carta 01

  printf("\nCarta 01\n==============================================\nDigite a Inicial da cidade (Ex:A-H): ");
  scanf(" %c", &carta1);

  printf("Digite o código da cidade (Ex:A01): ");
  scanf("%s", cod_carta1);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome_cidade1);

  printf("Digite o número da população na cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade:");
  scanf("%f", &pib1);

  printf("existem quantos pontos turísticos na cidade: ");
  scanf("%d", &pontos_turismo1);

  densidade1 = populacao1 / area1;
  percapta1 = populacao1 / pib1;


  //Dados carta 02

  printf("\nCarta02\n==============================================\nDigite a Inicial da cidade (Ex:A-H): ");
  scanf(" %c", &carta2);

  printf("Digite o código da cidade (Ex:A01): ");
  scanf("%s", cod_carta2);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome_cidade2);

  printf("Digite o número da população na cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("existem quantos pontos turísticos na cidade: ");
  scanf("%d", &pontos_turismo2);

  densidade2 = populacao2 / area2;
  percapta2 = populacao2 / pib2;

  //Dados primeira carta

  printf("\n==============================================\nCarta 1:\n==============================================\n");
  printf("Inicial: %c\n", carta1);
  printf("Código da cidade: %s\n", cod_carta1);
  printf("Nome: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.2f Km²\n", area1); 
  printf("PIB: %.2f Bilhões\n", pib1); 
  printf("Pontos turísticos: %d\n", pontos_turismo1);
  printf("Densidade populacional: %.2lf\n", densidade1);
  printf("Renda per capta: %.2lf\n", percapta1);


  //Dados segunda carta

  printf("\n==============================================\nCarta 2:\n==============================================\n");
  printf("Inicial: %c\n", carta2);
  printf("Código da cidade: %s\n", cod_carta2);
  printf("Nome: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.2f Km²\n", area2); 
  printf("PIB: %.2f Bilhões\n", pib2); 
  printf("Pontos turísticos: %d\n", pontos_turismo2);
  printf("Densidade populacional: %.2f\n", densidade2);
  printf("Renda per capta: %.2f\n", percapta2);


  return 0;
}