#include<stdio.h>
int main(){
char estado1, estado2;
char codigoDaCarta1[3]; 
char codigoDaCarta2[3]; 
char nomeDaCidade1[25];
char  nomeDaCidade2[25];
int populacao1;
int populacao2;
int turismo1;
int turismo2;
float area1;
float area2;
float pib1;
float pib2;


//Dados da carta 01
printf("Digite a letra do estado:\n");
scanf("%s", &estado1);

printf("Digite o código da primeira carta:\n");
scanf("%s", &codigoDaCarta1);

printf("Digite o nome da cidade:\n");
scanf("%s", &nomeDaCidade1);

printf("Digite a quantidade da população:\n");
scanf("%d", &populacao1);

printf("Digite a area:\n");
scanf("%f", &area1);

printf("Digite o PIB do estado:\n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &turismo1);

//Dados carta 02

printf("Digite a letra do estado:\n");
scanf("%s", &estado2);

printf("Digite o código da segunda carta:\n");
scanf("%s", &codigoDaCarta2);

printf("Digite o nome da cidade:\n");
scanf("%s", &nomeDaCidade2);

printf("Digite a quantidade da população:\n");
scanf("%d", &populacao2);

printf("Digite a area:\n");
scanf("%f", &area2);

printf("Digite o PIB do estado:\n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &turismo2);

//Resultado dos dados inseridos das duas cartas

printf("Carta 01:\n");
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigoDaCarta1);
printf("Nome da cidade: %s \n", nomeDaCidade1);
printf("População: %d \n", populacao1);
printf("Área: %f Km²\n", area1);
printf("PIB: %f Bilhoes de reais \n", pib1);
printf("Número de pontos Turisticos: %d \n\n", turismo1);

printf("Carta 02:\n");
printf("Estado: %s \n", estado2);
printf("Código: %s \n", codigoDaCarta2);
printf("Nome da cidade: %s \n", nomeDaCidade2);
printf("População: %d \n", populacao2);
printf("Área: %f Km²\n", area2);
printf("PIB: %f Bilhoes de reais \n", pib2);
printf("Número de pontos Turisticos: %d \n", turismo2);







}