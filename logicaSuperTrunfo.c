#include <stdio.h>

// Desafio Super Trunfo 
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() { 
    char nome1[20], nome2[20];// Declaração de variáveis 
    int populacao1, populacao2, pontos1, pontos2, opcao;
    float area1, area2, pib1, pib2, densidade1, densidade2;

        //Aqui o usuario entrará com informações sobre a carta 01, tais como:
        printf("Digite o nome de um país: \n");//Nome 
            scanf("%19s", nome1);

        printf("Quantos habitantes há nele? \n");//População
            scanf("%d", &populacao1);

        printf("Qual o tamanho total dele em km²? \n");//Área (em km²)
            scanf("%f", &area1);

        printf("Qual o PIB (Produto Interno Bruto) deste país? \n");//PIB
            scanf("%f", &pib1);

        printf("Quantos pontos turisticos há nele? \n");//Número de Pontos Turísticos
        scanf("%d", &pontos1);


        //Aqui o usuario entrará com informações sobre a segunda carta, 02, tais como:

        printf("Agora digite o nome de outro país: \n");//Nome 
            scanf("%19s", nome2);

        printf("Quantos habitantes há nele? \n");//População
            scanf("%d", &populacao2);

        printf("Qual o tamanho total dele em km²? \n");//Área (em km²)
            scanf("%f", &area2);

        printf("Qual o PIB (Produto Interno Bruto) deste país? \n");//PIB
            scanf("%f", &pib2);

        printf("Quantos pontos turisticos há nele? \n");//Número de Pontos Turísticos
            scanf("%d", &pontos2);

        //Calculo da densidade demográfica
            densidade1 = populacao1 / area1;//Carta 01
            densidade2 = populacao2 / area2;//Carta 02

                //Código da lógica
        //Exibindo as opções para o jogador escolher  
        printf("Escolha qual atributo será comparado:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turisticos\n");
        printf("5 - Densidade Demográfica\n");
            scanf("%d", &opcao);

    switch (opcao)//Código de cada opção
    {
    case 1: //Código que definirá o que será exibido quando o jogador escolher a opção Poulação
        if ( populacao1 == populacao2 ){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: População\n");
            printf("Carta 01: %d - Carta 02: %d\n", populacao1, populacao2);
            printf("## Empate! ##\n");  
        } else if (populacao1 > populacao2){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: População\n");
            printf("Carta 01: %df - Carta 02: %d\n", populacao1, populacao2);
            printf("## Carta 01 venceu! ##\n"); 
        } else {
            printf("%s vs %s\n", nome1, nome2);
            printf("Carta 01: %d - Carta 02\n: %d", populacao1, populacao2);
            printf("## Carta 02 venceu! ##\n");
        }
        break;
    case 2://Código que definirá o que será exibido quando o jogador escolher a opção Área
        if ( area1 == area2 ){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Área\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", area1, area2);
            printf("## Empate! ##\n");  
        } else if (area1 > area2){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Área\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", area1, area2);
            printf("## Carta 01 venceu! ##\n"); 
        } else {
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Área\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", area1, area2);
            printf("## Carta 02 venceu! ##\n");
        }
        break;
    case 3://Código que definirá o que será exibido quando o jogador escolher a opção PIB
        if ( pib1 == pib2 ){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: PIB\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", pib1, pib2);
            printf("## Empate! ##\n");
        } else if (pib1 > pib2){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: PIB\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", pib1, pib2);
            printf("## Carta 01 venceu! ##\n"); 
        } else {
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: PIB\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", pib1, pib2);
            printf("## Carta 02 venceu! ##\n");
        }
        break;
    case 4://Código que definirá o que será exibido quando o jogador escolher a opção Quantidade de Pontos Turisticos 
        if ( pontos1 == pontos2 ){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Número de Pontos Turisticos\n");
            printf("Carta 01: %dd - Carta 02: %d\n", pontos1, pontos2);
            printf("## Empate! ##\n");  
        } else if (pontos1 > pontos2){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Número de Pontos Turisticos\n");
            printf("Carta 01: %.d - Carta 02: %d\n", pontos1, pontos2);
            printf("## Carta 01 venceu! ##\n"); 
        } else {
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Número de Pontos Turisticos\n");
            printf("Carta 01: %d - Carta 02: %d\n", pontos1, pontos2);
            printf("## Carta 02 venceu! ##\n");
        }
        break;
    case 5: //Código que definirá o que será exibido quando o jogador escolher a opção Densidade Demográfica
        if ( densidade1 == densidade2 ){
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Densidade Demográfica\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", densidade1, densidade2);
            printf("## Empate! ##\n");  
        } else if (densidade1 < densidade2){;
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Densidade Demográfica\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", densidade1, densidade2);
            printf("## Carta 01 venceu! ##\n"); 
        } else {
            printf("%s vs %s\n", nome1, nome2);
            printf("Comparativo: Densidade Demográfica\n");
            printf("Carta 01: %.2f - Carta 02: %.2f\n", densidade1, densidade2);
            printf("## Carta 02 venceu! ##\n");
        }
        break;
    
    default:
        printf("Opção invalida!\n");//Indicando ao jogador que qualquer outra opção além das indicadas, são invalidas
        break;
    }
    
    return 0;
}
