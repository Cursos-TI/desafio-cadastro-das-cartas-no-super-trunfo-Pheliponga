#include <stdio.h>

int main(){
    unsigned long int populacao1_1, populacao2_1;
    int turistico1_1, turistico2_1;
    int carta1 = 1, carta2 = 2;
    char estado1_1[20], estado2_1[20];
    char cidade1_1[20], cidade2_1[20];
    char pais[20];
    float pib1_1, pib2_1;
    float area1_1, area2_1;
    float dp1_1, dp2_1;
    float capita1_1, capita2_1;
    float superpoder1_1, superpoder2_1;
   

    printf("\nBem-vindo ao Super Trunfo!\n");
    printf("\nHora de começar a jogar!\n");

    printf("\nEscolha o seu País para começar: ");
    scanf("%s", &pais);
    printf("\nPaís escolhido: %s\n", pais);

    // CARTA 1 COMEÇA AQUI!

    printf("\nCarta: %d\n", carta1);

    printf("\nEscolha o seu ESTADO (A): ");
    scanf("%s", &estado1_1);
    printf("\nSeu estado: %s\n", estado1_1);

    printf("\nEscolha a sua CIDADE preferida: ");
    scanf("%s", &cidade1_1);

    printf("\nInforme os seguintes dados da CIDADE (A01): POPULAÇÃO, ÁREA, PIB e o NÚMERO DE PONTOS TURÍSTICOS!\n");

    printf("\n- POPULAÇÃO: ");
    scanf("%lu", &populacao1_1);

    printf("\n- ÁREA: ");
    scanf("%f", &area1_1);

    printf("\n- PIB: ");
    scanf("%f", &pib1_1);

    printf("\n- PONTOS TURÍSTICOS: ");
    scanf("%d", &turistico1_1);

    /* INSERÇÃO DE NOVOS DADOS ATRAVÉS DE 
    OPERAÇÕES MATEMÁTICAS CARTA A01 */  

    dp1_1 = populacao1_1 / area1_1;
    capita1_1 = pib1_1 / populacao1_1;    

    // INSERÇÃO DE SUPER PODER CARTA A01

    superpoder1_1 = area1_1 + pib1_1 + (float)turistico1_1 + (float)populacao1_1 + capita1_1 - dp1_1;

    // CARTA 2 COMEÇA AQUI!

    printf("\nCarta: %d\n", carta2);

    printf("\nEscolha o seu ESTADO (B): ");
    scanf("%s", &estado2_1);
    printf("\nSeu estado: %s\n", estado2_1);

    printf("\nEscolha a sua CIDADE preferida: ");
    scanf("%s", &cidade2_1);

    printf("\nInforme os seguintes dados da CIDADE (B02): POPULAÇÃO, ÁREA, PIB e o NÚMERO DE PONTOS TURÍSTICOS!\n");

    printf("\n- POPULAÇÃO: ");
    scanf("%lu", &populacao2_1);

    printf("\n- ÁREA: ");
    scanf("%f", &area2_1);

    printf("\n- PIB: ");
    scanf("%f", &pib2_1);

    printf("\n- PONTOS TURÍSTICOS: ");
    scanf("%d", &turistico2_1);

    /* INSERÇÃO DE NOVOS DADOS ATRAVÉS DE 
    OPERAÇÕES MATEMÁTICAS CARTA B02 */  

    dp2_1 = populacao2_1 / area2_1;
    capita2_1 = pib2_1 / populacao2_1;  
    
   // INSERÇÃO DE SUPER PODER CARTA A01

   superpoder2_1 = area2_1 + pib2_1 + (float)turistico2_1 + (float)populacao2_1 + capita2_1 - dp2_1;

    // EXIBIÇÃO DOS DADOS DAS CARTAS!

    printf("\nEstas são suas cartas:\n");
    
    printf("\nCarta: %d\n" "Código: A01\n" "País: %s\n" "Estado: %s\n" "Cidade: %s\n" "População: %lu\n" "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n", carta1, pais, estado1_1, cidade1_1, populacao1_1, area1_1, pib1_1, turistico1_1);
    printf("Densidade Populacional: %.2f hab/Km²\n" "PIB Per Capita: R$ %.2f\n", dp1_1, capita1_1);
    printf("SUPER PODER: %.2f\n", superpoder1_1);
    
    printf("\nCarta: %d\n" "Código: B02\n" "País: %s\n" "Estado: %s\n" "Cidade: %s\n" "População: %lu\n" "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n", carta2, pais, estado2_1, cidade2_1, populacao2_1, area2_1, pib2_1, turistico2_1);    
    printf("Densidade Populacional: %.2f hab/Km²\n" "PIB Per Capita: R$ %.2f\n", dp2_1, capita2_1);
    printf("SUPER PODER: %.2f\n", superpoder2_1);

// comparação

int comparacaoarea = area1_1 > area2_1;
int comparacaopopulacao = populacao1_1 > populacao2_1;
int comparacaopib = pib1_1 > pib2_1;
int comparacaoturisticos = turistico1_1 > turistico2_1;
int comparacaodp = dp1_1 > dp2_1;
int comparacaocapita = capita1_1 > capita2_1;
int comparacaopoder = superpoder1_1 > superpoder2_1;

printf("\nComparação das Cartas:\n");

printf("Area: %d\n", comparacaoarea);
printf("População: %d\n", comparacaopopulacao);
printf("PIB: %d\n", comparacaopib);
printf("Pontos Turisticos: %d\n", comparacaoturisticos);
printf("Desnsidade populacional: %d\n", comparacaodp);
printf("PIB Per Capita: %d\n", comparacaocapita);
printf("Super Poder: %d\n", comparacaopoder);



    return 0; 

}