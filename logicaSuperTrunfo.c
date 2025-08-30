#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1, estado2, codigo1[20], codigo2[20], nome1[20], nome2[20];
    int resultadopopulacao, resultadoarea, resultadopib, resultadopontos, resultadodensidade, resultadopercapita, resultadosuperpoder;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2;

        //Aqui o usuario entrará com informações sobre a carta 01, tais como:
        printf("Digite as inciais de um estado (entre A e H): \n");//Sigla do estado (será atrelado ao número 01)
            scanf(" %c", &estado1); 

                // Criação manual do código da carta 1
                codigo1[0] = estado1;
                codigo1[1] = '0';
                codigo1[2] = '1';
                codigo1[3] = '\0';

        printf("Digite o nome de uma cidade deste estado: \n");//Nome da cidade
            scanf("%19s", nome1);

        printf("Esta será a cidade número 1! Quantos habitantes há nela? \n");//População
            scanf("%lu", &populacao1);

        printf("Qual o tamanho total dela em km²? \n");//Área (em km²)
            scanf("%f", &area1);

        printf("Qual o PIB (Produto Interno Bruto) desta cidade? \n");//PIB
            scanf("%f", &pib1);

        printf("Quantos pontos turisticos há nesta cidade? \n");//Número de Pontos Turísticos
        scanf("%d", &pontos1);

        //Aqui o usuario entrará com informações sobre a segunda carta, 02, tais como:
        printf("Agora digite as iniciais de outro estado (lembrando,entre A e H): \n");//Sigla do segundo estado (será atrelado ao número 02)
            scanf(" %c", &estado2); 

                // Criação manual do código da carta 2
                codigo2[0] = estado2;
                codigo2[1] = '0';
                codigo2[2] = '2';
                codigo2[3] = '\0';

        printf("Digite o nome de uma cidade deste estado: \n");//Nome da cidade
            scanf("%19s", nome2);

        printf("Esta será a cidade número 2! Quantos habitantes há nela? \n");//População
            scanf("%lu", &populacao2);

        printf("Qual o tamanho total dela em km²? \n");//Área (em km²)
            scanf("%f", &area2);

        printf("Qual o PIB (Produto Interno Bruto) desta cidade? \n");//PIB
            scanf("%f", &pib2);

        printf("Quantos pontos turisticos há nesta cidade? \n");//Número de Pontos Turísticos
        scanf("%d", &pontos2);

        //Calculos
            densidade1 = populacao1 / area1;//Carta 01
            percapita1 = pib1 / populacao1;
            densidade2 = populacao2 / area2;//Carta 02
            percapita2 = pib2 / populacao2;
            superpoder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + (area1 / populacao1); //Calculando o poder das cartas       
            superpoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (area2 / populacao2);    

            //Exibição das cartas 
    printf("Carta 1: \n");// Carta 1
    printf("Estado: %c \n", estado1); 
    printf("Código da Carta: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %lu \n", populacao1);
    printf("Área %.2fkm² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turístico: %d \n", pontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", percapita1);
    printf("Super Poder: %2.f \n", superpoder1);
        
    printf("Carta 2: \n");// Carta 2
    printf("Estado: %c \n", estado2); 
    printf("Código da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área %.2fkm² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de Pontos Turístico: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", percapita2);
    printf("Super Poder: %2.f \n", superpoder2);

    printf("Comparação das castas (Atributo Super Poder): \n"); //Aqui exibira os comparativos
    printf("Carta 1 - %s(%c): %f \n", nome1, estado1, superpoder1);
    printf("Carta 2 - %s(%c) %f \n", nome2, estado2, superpoder2);
    
    if (superpoder1 > superpoder2){
        printf("Resultado: Carta 01 %s(%c) venceu! \n", nome1, estado1);
    } else {
        printf("Resultado: Carta 02 %s(%c) venceu! \n", nome2, estado2);
    }

    return 0;
}
