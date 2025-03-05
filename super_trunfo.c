#include<stdio.h>
int main(){
char estado1[5];
char codigoDaCarta1[10]; 
char cidade1[50];
int populacao1;
float area1;
float pib1;
int turismo1;

char estado2[1];
char codigoDaCarta2[3]; 
char nomeDaCidade2[25];
int populacao2;
float area2;
float pib2;
int turismo2;

//Dados da carta 01
printf("Digite a letra do estado:\n");
scanf("%s", &estado1);

printf("Digite o código da primeira carta:\n");
scanf("%s", &codigoDaCarta1);

printf("Digite o nome da cidade:\n");
scanf("%s", &cidade1);

printf("Digite a quantidade da população:\n");
scanf("%d", &populacao1);

printf("Digite a area:\n");
scanf("%f", &area1);

printf("Digite o PIB do estado:\n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &turismo1);


printf("Carta 01:\n");
printf("Estado: %c \n", estado1);
printf("Código: %s \n", codigoDaCarta1);
printf("Nome da cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %f Km²\n", area1);
printf("PIB: %f Bilhoes de reais \n", pib1);
printf("Número de pontos Turisticos: %d \n\n", turismo1);

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


printf("Carta 02:\n");
printf("Estado: %c \n", estado2);
printf("Código: %s \n", codigoDaCarta2);
printf("Nome da cidade: %s \n", nomeDaCidade2);
printf("População: %d \n", populacao2);
printf("Área: %f Km²\n", area2);
printf("PIB: %f Bilhoes de reais \n", pib2);
printf("Número de pontos Turisticos: %d \n", turismo2);




return 0;


}