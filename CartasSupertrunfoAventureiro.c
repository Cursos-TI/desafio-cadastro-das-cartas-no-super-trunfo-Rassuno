#include <stdio.h>

int main() {
    char Estado[2], Cidade[50], Estado2[2], Cidade2[50]; 
    int  pturisticos, pturisticos2, Populacao, Populacao2;
    float Area, PIB, Area2, PIB2, PPCapta, PPCapta2, DensiPop, DensiPop2;

    printf("Carta01\nDigite o nome da Cidade: "); 
    scanf("%[^\n]", Cidade);

    printf("Digite a letra do Estado (de A a H): "); 
    scanf(" %[^\n]", Estado);

    printf("Digite a População: "); 
    scanf("%d", &Populacao);

    printf("Digite a Área em km²: "); 
    scanf("%f", &Area);

    printf("Digite o PIB: "); 
    scanf("%f", &PIB); 

    printf("Número de pontos turísticos: "); 
    scanf("%d", &pturisticos);

    PPCapta = (float) PIB / Populacao;
    DensiPop = (float) Populacao / Area;

    // Segunda carta
    
    printf("\nCarta02\n Digite o nome da Cidade: "); 
    scanf(" %[^\n]", Cidade2);

    printf("Digite a letra do Estado (de A a H): "); 
    scanf(" %[^\n]", Estado2);

    printf("Digite a População: "); 
    scanf("%d", &Populacao2);

    printf("Digite a Área em km²: "); 
    scanf("%f", &Area2);

    printf("Digite o PIB: "); 
    scanf("%f", &PIB2); 

    printf("Número de pontos turísticos: "); 
    scanf("%d", &pturisticos2);
    
    PPCapta2 = (float) PIB2 / Populacao2;
    DensiPop2 = (float) Populacao2 / Area2;

    printf("\nCarta1\nCidade: %s\nEstado: %s\nCódigo: %s01\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per Capita: %.2f\n", 
        Cidade, Estado, Estado, Populacao, Area, PIB, pturisticos, DensiPop, PPCapta);

    printf("\nCarta2\nCidade: %s\nEstado: %s\nCódigo: %s02\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per Capita: %.2f\n",
        Cidade2, Estado2, Estado2, Populacao2, Area2, PIB2, pturisticos2, DensiPop2, PPCapta2);

    return 0;

}