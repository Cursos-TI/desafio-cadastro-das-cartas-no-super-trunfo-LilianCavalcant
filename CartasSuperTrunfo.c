#include <stdio.h>

int main() {
    char estado1, estado2;                           /* O estado é representado por uma letra de 'A' a 'H' */
    char codigo1[4], codigo2[4];                     /* Código da carta de 01 até 04 (tamanho 4 para comportar o '\0') */
    char cidade1[100], cidade2[100];                 /* Nome da cidade, com capacidade para até 99 caracteres */
    int populacao1, populacao2;                      /* População da cidade */
    float area1, area2;                              /* Área do território da cidade */
    float pib1, pib2;                                /* O PIB da cidade */
    int pontos1, pontos2;                            /* Número de pontos turísticos da cidade */
    float densidade1 = 0, densidade2 = 0;            /* Densidade populacional: hab/km²*/
    float pibpercapta1 = 0, pibpercapta2 = 0;        /*PIB per capta em reais*/
    

    /* Dados da Carta1 */
    printf("\nCarta 1\n");
    printf("Digite a letra que representa o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (A01, B03, etc.): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Qual o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos na cidade: ");
    scanf("%d", &pontos1);

    /* Dados da Carta2 */
    printf("\nCarta 2\n");
    printf("Digite a letra que representa o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (A01, B03, etc.): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Qual o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos na cidade: ");
    scanf("%d", &pontos2);

    /* Calculando as variáveis*/
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapta1 = pib1 / populacao1;
    pibpercapta2 = pib2 / populacao2;

    /* Exibindo os dados da carta 1 */
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade1);
    printf("PIB per Capta: %.1f reais\n", pibpercapta1);


    /* Exibindo os dados da carta 2 */
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade2);
    printf("PIB per Capta: %.1f reais\n", pibpercapta2);

    //Comparação de cartas (Atributo: População):
    //Vence a carta que tiver a maior população
    
    if (populacao1 > populacao2) {
        printf("\nCarta 1 - %s : %lu habitantes\n", cidade1, populacao1);
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);
        
      } else {
        printf("\nCarta 2 - %s : %lu habitantes\n", cidade2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
      }

    
    return 0;
}
