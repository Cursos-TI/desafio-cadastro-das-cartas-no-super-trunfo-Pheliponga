#include <stdio.h>

int main(){ 
  int populacao2_1_1, populacao2_1_2, populacao2_1_3, populacao2_1_4; 
  int populacao2_2_1, populacao2_2_2, populacao2_2_3, populacao2_2_4;
  int populacao2_3_1, populacao2_3_2, populacao2_3_3, populacao2_3_4;
  int populacao2_4_1, populacao2_4_2, populacao2_4_3, populacao2_4_4;
  int populacao2_5_1, populacao2_5_2, populacao2_5_3, populacao2_5_4;
  int populacao2_6_1, populacao2_6_2, populacao2_6_3, populacao2_6_4;
  int populacao2_7_1, populacao2_7_2, populacao2_7_3, populacao2_7_4;
  int populacao2_8_1, populacao2_8_2, populacao2_8_3, populacao2_8_4;

  int turistico2_1_1, turistico2_1_2, turistico2_1_3, turistico2_1_4; 
  int turistico2_2_1, turistico2_2_2, turistico2_2_3, turistico2_2_4;
  int turistico2_3_1, turistico2_3_2, turistico2_3_3, turistico2_3_4;
  int turistico2_4_1, turistico2_4_2, turistico2_4_3, turistico2_4_4;
  int turistico2_5_1, turistico2_5_2, turistico2_5_3, turistico2_5_4;
  int turistico2_6_1, turistico2_6_2, turistico2_6_3, turistico2_6_4;
  int turistico2_7_1, turistico2_7_2, turistico2_7_3, turistico2_7_4;
  int turistico2_8_1, turistico2_8_2, turistico2_8_3, turistico2_8_4;

  double pib2_1_1, pib2_1_2, pib2_1_3, pib2_1_4; 
  double pib2_2_1, pib2_2_2, pib2_2_3, pib2_2_4;
  double pib2_3_1, pib2_3_2, pib2_3_3, pib2_3_4;
  double pib2_4_1, pib2_4_2, pib2_4_3, pib2_4_4;
  double pib2_5_1, pib2_5_2, pib2_5_3, pib2_5_4;
  double pib2_6_1, pib2_6_2, pib2_6_3, pib2_6_4;
  double pib2_7_1, pib2_7_2, pib2_7_3, pib2_7_4;
  double pib2_8_1, pib2_8_2, pib2_8_3, pib2_8_4;

  double area2_1_1, area2_1_2, area2_1_3, area2_1_4; 
  double area2_2_1, area2_2_2, area2_2_3, area2_2_4;
  float area2_3_1, area2_3_2, area2_3_3, area2_3_4;
  float area2_4_1, area2_4_2, area2_4_3, area2_4_4;
  float area2_5_1, area2_5_2, area2_5_3, area2_5_4;
  float area2_6_1, area2_6_2, area2_6_3, area2_6_4;
  float area2_7_1, area2_7_2, area2_7_3, area2_7_4;
  float area2_8_1, area2_8_2, area2_8_3, area2_8_4;

  char nome1[50];

  char nome1_1[50], nome1_2[50], nome1_3[50], nome1_4[50], nome1_5[50], nome1_6[50], nome1_7[50], nome1_8[50];
  
  char nome2_1_1[50], nome2_1_2[50], nome2_1_3[50], nome2_1_4[50];
  char nome2_2_1[50], nome2_2_2[50], nome2_2_3[50], nome2_2_4[50];
  char nome2_3_1[50], nome2_3_2[50], nome2_3_3[50], nome2_3_4[50];
  char nome2_4_1[50], nome2_4_2[50], nome2_4_3[50], nome2_4_4[50];
  char nome2_5_1[50], nome2_5_2[50], nome2_5_3[50], nome2_5_4[50];
  char nome2_6_1[50], nome2_6_2[50], nome2_6_3[50], nome2_6_4[50];
  char nome2_7_1[50], nome2_7_2[50], nome2_7_3[50], nome2_7_4[50];
  char nome2_8_1[50], nome2_8_2[50], nome2_8_3[50], nome2_8_4[50];
  
  printf("\nBEM VINDO AO SUPER TRUNFO!\n");
  printf("\nHORA DE COMEÇAR A JOGAR!\n");

  printf("\nDIGITE O NOME DO PAÍS DESEJADO:");
  scanf(" %s", &nome1);
  printf("\nSEU PAÍS: %s\n", &nome1);

  printf("\nESCOLHA O SEU ESTADO (A):");
  scanf(" %s", &nome1_1);
  printf("\nSEU ESTADO (A): %s\n", &nome1_1);

  printf("\nAGORA, PRECISAMOS SABER QUAIS SUAS CIDADES PREFERIDAS DO ESTADO (A)\n");
  printf("ESCOLHA SUA CIDADE E INFORME OS SEGUINTES DADOS: POPULAÇÃO, ÁREA, NÚMEROS DE PONTOS TURÍSTICOS E PIB!\n");

  printf("\nDIGITE O NOME DA SUA CIDADE (A01:)");
  scanf(" %s", &nome2_1_1);
  printf("\nSUA CIDADE (A01): %s\n", &nome2_1_1);

  printf("\nINFORME OS DADOS DA CIDADE (A01):\n");
  
  printf("\n- POPULAÇÃO:");
  scanf("%f", &populacao2_1_1);
  
  printf("\n- ÁREA (M²):");
  scanf("%f", &area2_1_1);

  printf("\n- PONTOS TURÍSTICOS:");
  scanf("%d", &turistico2_1_1);

  printf("\n- PIB ($):");
  scanf("%f", &pib2_1_1);

  //intervalo da cidade A01 para A02.

  printf("\nDIGITE O NOME DA SUA CIDADE (A02):");
  scanf(" %s", &nome2_1_2);
  printf("\nSUA CIDADE (A02): %s\n", &nome2_1_2);

  printf("\nINFORME OS DADOS DA CIDADE (A02):\n");
  
  printf("\n- POPULAÇÃO:");
  scanf("%f", &populacao2_1_2);
  
  printf("\n- ÁREA (M²):");
  scanf("%f", &area2_1_2);

  printf("\n- PONTOS TURÍSTICOS:");
  scanf("%d", &turistico2_1_2);

  printf("\n- PIB ($):");
  scanf("%f", &pib2_1_2);

  //intervalo da cidade A02 para A03

  printf("\nDIGITE O NOME DA SUA CIDADE (A03):");
  scanf(" %s", &nome2_1_3);
  printf("\nSUA CIDADE (A02): %s\n", &nome2_1_3);

  printf("\nINFORME OS DADOS DA CIDADE (A03):\n");
  
  printf("\n- POPULAÇÃO:");
  scanf("%f", &populacao2_1_3);
  
  printf("\n- ÁREA (M²):");
  scanf("%f", &area2_1_3);

  printf("\n- PONTOS TURÍSTICOS:");
  scanf("%d", &turistico2_1_3);

  printf("\n- PIB ($):");
  scanf("%f", &pib2_1_3);

//intervalo da cidade A03 para A04
  
  printf("\nDIGITE O NOME DA SUA CIDADE (A04):");
  scanf(" %s", &nome2_1_4);
  printf("\nSUA CIDADE (A02): %s\n", &nome2_1_4);

  printf("\nINFORME OS DADOS DA CIDADE (A04):\n");
  
  printf("\n- POPULAÇÃO:");
  scanf("%f", &populacao2_1_4);
  
  printf("\n- ÁREA (M²):");
  scanf("%f", &area2_1_4);

  printf("\n- PONTOS TURÍSTICOS:");
  scanf("%d", &turistico2_1_4);

  printf("\n- PIB ($):");
  scanf("%f", &pib2_1_4);

//intervalo da cidade A04 para o Estado B

printf("\nESCOLHA O SEU ESTADO (B):");
  scanf(" %s", &nome1_2);
  printf("\nSEU ESTADO (B): %s\n", &nome1_2);

  printf("\nAGORA, PRECISAMOS SABER QUAIS SUAS CIDADES PREFERIDAS DO ESTADO (B)\n");
  printf("ESCOLHA SUA CIDADE E INFORME OS SEGUINTES DADOS: POPULAÇÃO, ÁREA, NÚMEROS DE PONTOS TURÍSTICOS E PIB!\n");

  printf("\nINFORME OS DADOS DA CIDADE (B01):\n");
  
  printf("\n- POPULAÇÃO:");
  scanf("%f", &populacao2_2_1);
  
  printf("\n- ÁREA (M²):");
  scanf("%f", &area2_2_1);

  printf("\n- PONTOS TURÍSTICOS:");
  scanf("%d", &turistico2_2_1);

  printf("\n- PIB ($):");
  scanf("%f", &pib2_2_1);






    }
