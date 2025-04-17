#include <stdio.h>

int main() {
    //Variaveis principais
    char estado1[20], estado2[20], codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    int populacao1, populacao2, PT1, PT2;
    float PIB1, PIB2, area1, area2, DP1, DP2, PPC1, PPC2;
    // Variaveis da comparação das cartas
    unsigned int DenPIB1 = (DP1 + PPC1), DenPIB2 = (DP2 + PPC2);
    unsigned int SuperPoder1 = (populacao1 + area1 + PIB1 + PT1 + PPC1 + (1 / DP1));
    unsigned int SuperPoder2 = (populacao2 + area2 + PIB2 + PT2 + PPC2 + (1 / DP2));
    int ResPopulacao, ResArea, ResPIB, ResPT, ResDP, ResPPC, ResSuper;
    
        
    // Carta 1 (DADOS)

    printf("Digite as seguintes informações ");
    printf(" - Carta 1\n");

    printf("Inicial do Estado: ");
    scanf("%s", &estado1);

    printf("Código (EX: A01, B02...): ");
    scanf("%s", &codigo1);

    getchar(); // Consumir o '\n' pendente

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Número da População: ");
    scanf("%d", &populacao1);

    printf("Qual a área do Estado: ");
    scanf("%f", &area1);

    DP1 = (float)populacao1 / area1;

    printf("PIB: ");
    scanf("%f", &PIB1);

    PPC1 = PIB1 / populacao1;

    printf("Número de pontos turísticos: ");
    scanf("%d", &PT1);

    // Carta 2 (DADOS)
 
    printf("\n_*_ Agora digite as informações da Carta 2 _*_\n");

    printf("Inicial do Estado: ");
    scanf("%s", &estado2);

    printf("Código (EX: A01, B02...): ");
    scanf("%s", &codigo2);

    getchar(); // Consumir o '\n' pendente

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Número da População: ");
    scanf("%d", &populacao2);

    printf("Qual a área do Estado: ");
    scanf("%f", &area2);

    DP2 = (float)populacao2 / area2;

    printf("PIB: ");
    scanf("%f", &PIB2);

    PPC2 = PIB2 / populacao2;

    printf("Número de pontos turísticos: ");
    scanf("%d", &PT2);

    // Exibir os dados das cartas
    // Carta 1
    printf("\n      *** Carta 1***\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %sPopulação: %d\n", estado1, codigo1, cidade1, populacao1);
    printf("Área: %.2f Km²\nPIB: %.f Bilhões de reais\nNúmero de Pontos Turísticos: %d\n", area1, PIB1 / 1000000000, PT1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", DP1, PPC1);

    // Carta 2

    printf("\n      *** Carta 2 ***\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %sPopulação: %d\n", estado2, codigo2, cidade2, populacao2);
    printf("Área: %.2f Km²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\n", area2, PIB2 / 1000000000, PT2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", DP2, PPC2);
    printf("\n****** Resultado ******\n");

    // Comparação de cartas utilizando if / else

    if (populacao1 > populacao2){
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }

    if (area1 > area2){
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
    
    if (PIB1 > PIB2){
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
    
    if (PT1 > PT2){
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
    
    if (DP1 > DP2){
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }

    if (PPC1 > PPC2){
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }

    if (SuperPoder1 > SuperPoder2){
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }

    return 0;
}