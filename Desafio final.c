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
   

    printf("\n### Bem-vindo ao Super Trunfo! ###\n");
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
int comparacaodp = dp1_1 < dp2_1;
int comparacaocapita = capita1_1 > capita2_1;
int comparacaopoder = superpoder1_1 > superpoder2_1;

// utilização dos comando "if e else para fins de comparação."

printf("\n***Comparação das Cartas:***\n");

if (populacao1_1 > populacao2_1){
    printf("População: Carta 1 venceu (%d)\n", comparacaopopulacao);
} else {
    printf("População: Carta 2 venceu (%d)\n", comparacaopopulacao);
}
if (area1_1 > area2_1){
    printf("Área: Carta 1 venceu (%d)\n", comparacaoarea);
} else {
    printf("Área: Carta 2 venceu (%d)\n", comparacaoarea);
} 
if (pib1_1 > pib2_1){
    printf("PIB: Carta 1 venceu (%d)\n", comparacaopib);
} else {
    printf("PIB: Carta 2 venceu (%d)\n", comparacaopib);
}
if (turistico1_1 > turistico2_1){
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comparacaoturisticos);
} else {
    printf("Pontos Turísticos: Carta 2 venceu (%d)\n", comparacaoturisticos);
}
if (dp1_1 < dp2_1){
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", comparacaodp);
} else {
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparacaodp);
}
if (capita1_1 > capita2_1){
    printf("PIB Per Capita: Carta 1 venceu (%d)\n", comparacaocapita);
} else {
    printf("PIB Per Capita: Carta 2 venceu (%d)\n", comparacaocapita);
}
if (superpoder1_1 > superpoder2_1){
    printf("Super Poder: Carta 1 venceu (%d)\n", comparacaopoder);
} else {
    printf("Super Poder: Carta 2 venceu (%d)\n", comparacaopoder);
} 

/*Considerações finais: 
---> Não encontrei outra alternativa para realizar a comparação e exibi-la
como solicitado no trabalho, sem ter que utilizar o comando "If e Else".

---> Acrescentei a escolha de países, não limitando o jogo a somente o território
brasileiro.

---> Eu optei por colocar o "Código" e "Carta" como um valores atribuídos automaticamente,
independente da escolha do jogador. Por exemplo: A primeira carta sempre será a "Carta 1 - A01",
a segunda "Carta 2 - B01", a terceira "Carta 3 - C01" e assim por diante. Portanto, no meu entendimento, não
haveria necessidade do jogador atribuir uma resposta.*/

    return 0; 

}