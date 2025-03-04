#include <stdio.h>

int main(){
    int populacao1_1, populacao2_1;
    int turistico1_1, turistico2_1;
    int carta1 = 1, carta2 = 2;
    char estado1_1[20], estado2_1[20];
    char cidade1_1[20], cidade2_1[20];
    char pais[20];
    float pib1_1, pib2_1;
    float area1_1, area2_1;
   

    printf("\nBem-vindo ao Super Trunfo!\n");
    printf("\nHora de começar a jogar!\n");

    printf("\nEscolha o seu País para começar: ");
    scanf(" %s", &pais);
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
    scanf("%d", &populacao1_1);

    printf("\n- ÁREA: ");
    scanf("%f", &area1_1);

    printf("\n- PIB: ");
    scanf("%f", &pib1_1);

    printf("\n- PONTOS TURÍSTICOS: ");
    scanf("%d", &turistico1_1);

    // CARTA 2 COMEÇA AQUI!

    printf("\nCarta: %d\n", carta2);

    printf("\nEscolha o seu ESTADO (B): ");
    scanf("%s", &estado2_1);
    printf("\nSeu estado: %s\n", estado2_1);

    printf("\nEscolha a sua CIDADE preferida: ");
    scanf("%s", &cidade2_1);

    printf("\nInforme os seguintes dados da CIDADE (B02): POPULAÇÃO, ÁREA, PIB e o NÚMERO DE PONTOS TURÍSTICOS!\n");

    printf("\n- POPULAÇÃO: ");
    scanf("%d", &populacao2_1);

    printf("\n- ÁREA: ");
    scanf("%f", &area2_1);

    printf("\n- PIB: ");
    scanf("%f", &pib2_1);

    printf("\n- PONTOS TURÍSTICOS: ");
    scanf("%d", &turistico2_1);

    // EXIBIÇÃO DOS DADOS DAS CARTAS!

    printf("\nEstas são suas cartas:\n");
    
    printf("\nCarta: %d\n" "Código: A01\n" "País: %s\n" "Estado: %s\n" "Cidade: %s\n" "População: %d\n" "Área: %.3f km²\n"
        "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n", carta1, pais, estado1_1, cidade1_1, populacao1_1, area1_1, pib1_1, turistico1_1);
    
    printf("\nCarta: %d\n" "Código: B02\n" "País: %s\n" "Estado: %s\n" "Cidade: %s\n" "População: %d\n" "Área: %.3f km²\n"
        "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n", carta2, pais, estado2_1, cidade2_1, populacao2_1, area2_1, pib2_1, turistico2_1);    
    
    return 0; 

}