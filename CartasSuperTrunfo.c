#include <stdio.h>

int main() {
    int main(){

        char estado1[20], estado2[20], codigo1[10], codigo2[10], cidade1[20], cidade2[20];
        int populacao1, populacao2, PT1, PT2;
        float PIB1, PIB2, area1, area2;

        printf("Digite as seguintes informações ");
        printf(" - Carta 1\n");

        printf("Inicial do Estado: ");
        scanf("%s", &estado1);

        printf("Codigo (EX: A01, B02...): ");
        scanf(" %s", &codigo1);

        getchar(); //para consumir o caractere de nova linha: isso pode ser feito antes do scanf

        printf("Nome da Cidade: ");
        fgets(cidade1, 20 ,stdin);

        printf("Numero da População: ");
        scanf("%i", &populacao1);

        printf("Qual a área do Estado: ");
        scanf("%f", &area1);

        printf("PIB: ");
        scanf("%f", &PIB1);

        printf("Numero de pontos turisticos: ");
        scanf("%i", &PT1);

        printf("\nAgora digite as informações da Carta 2\n");

        printf("Inicial do Estado: ");
        scanf("%s", &estado2);

        printf("Codigo (EX: A01, B02...): ");
        scanf("%s", &codigo2);

        getchar();

        printf("Nome da Cidade: ");
        fgets(cidade2,20,stdin);

        printf("Numero da População: ");
        scanf("%i", &populacao2);

        printf("Qual a área do Estado: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &PIB2);

        printf("Numero de pontos turisticos: ");
        scanf("%i", &PT2);

        printf("\nCarta 1: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d ", estado1, codigo1, cidade1, populacao1);
        printf("\nÁrea: %.2f Km² \n PIB: %.2f Bilhões de reais\n Número de Pontos Turísticos: %d", area1,PIB1,PT1);

        printf("\nCarta 2: \n Estado: %c \n Código: %s \n Nome da Cidade: %s  População: %d ", estado2, codigo2, cidade2, populacao2);
        printf("\nÁrea: %.2f Km² \n PIB: %.2f Bilhões de reais\n Número de Pontos Turísticos: %d", area2,PIB2,PT2);

    return 0;
}
