#include <stdio.h>

int main(){
    int populacao1_1, populacao2_1;
    int turistico1_1, turistico2_1;
    int carta1 = 1, carta2 = 2;
    char estado1_1[20], estado2_1[16];
    char cidade1_1[15], cidade2_1[17];
    char pais[19];
    float pib1_1, pib2_1;
    float area1_1, area2_1;
   

    printf("\nBem-vindo ao Super Trunfo!\n");
    printf("\nHora de começar a jogar!\n");

    printf("\nEscolha o seu País para começar: ");
    scanf(" %s", &pais);
    printf("\nPaís escolhido: %s\n", pais);

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

//agora vou exibir os dados//

    printf("\nCarta: %d\n" "País: %s\n" "Estado: %s\n" "Código: A01\n" "Cidade: %s\n" "População: %d\n" "Area: %f\n"
        "PIB: %f\n" "Pontos Turísticos: %d\n", carta1, pais, estado1_1, cidade1_1, populacao1_1, area1_1, pib1_1, turistico1_1);
    
    return 0; 

}