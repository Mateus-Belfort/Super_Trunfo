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
  float poder1;
  

  //Carta 2
  char carta2;
  char cod_carta2[5];
  char nome_cidade2[50];
  int populacao2, pontos_turismo2;
  float area2, pib2;  
  float densidade2;
  float percapta2;
  float poder2;


  //comparação de cartas

 int populacao_maior, ponto_turistico_maior;
 float area_maior, pib_maior, densidade_maior, percapta_maior, poder_maior;
 char carta_maior[50];


  //Dados carta 01

  printf("\nCarta 01\n==============================================\nDigite a Inicial da cidade (Ex:A-H): ");
  scanf(" %c", &carta1); //o espaço antes do % evita erros no buffer

  printf("Digite o código da cidade (Ex:A01): ");
  scanf("%s", cod_carta1); //recebe string sem espaçamento

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome_cidade1);  //recebe o nome completo da cidade com qualquer caractere

  printf("Digite o número da população na cidade: ");
  scanf("%d", &populacao1); //recebe um numero inteiro para calculo

  printf("Digite a área da cidade: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade:");
  scanf("%f", &pib1);

  printf("existem quantos pontos turísticos na cidade: ");
  scanf("%d", &pontos_turismo1);

  densidade1 = populacao1 / area1; // calculo após receber os dados para base da divisão
  percapta1 = pib1 / populacao1 ; // calculo da renda per capta populacional
  poder1 = (float) populacao1 + area1 + pib1 + pontos_turismo1 + percapta1; // soma de todos os valores para obter o super poder


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
  poder2 =(float) populacao2 + area2 + pib2 + pontos_turismo2 + densidade2 + percapta2;


  


  //Saida da primeira carta

  printf("\n==============================================\nCarta 1:\n==============================================\n"); //inserido estilização com simbolo de = para melhor visualização
  printf("Inicial: %c\n", carta1);
  printf("Código da cidade: %s\n", cod_carta1);
  printf("Nome: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.2f Km²\n", area1); 
  printf("PIB: %.2f Bilhões\n", pib1); 
  printf("Pontos turísticos: %d\n", pontos_turismo1);
  printf("Densidade populacional: %.2lf\n", densidade1);
  printf("Renda per capta: %.2lf\n", percapta1);
  printf("Super poder: %.2f\n", poder1);


  //saida da segunda carta

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
  printf("Super poder: %.2f\n", poder2);


  //Comparação entre as Cartas

  


 

 

  printf("\n==============================================\nComparação de cartas:\n==============================================\n");
  printf("Comparação de cartas - Atributo (População):\n");
  printf("Carta 01 - %s : %d\n", nome_cidade1, populacao1);
  printf("Carta 02 - %s : %d\n", nome_cidade2, populacao2);


  if (populacao1 > populacao2)
  {
    printf("Resultado: Carta 01 - %s venceu (1)", nome_cidade1);
  }else{
    printf("Resultado: Carta 02 - %s venceu (0)", nome_cidade2);
  };

  printf("\n===================================================================================================================\n");

  return (0);
}
