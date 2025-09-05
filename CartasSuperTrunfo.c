#include <stdio.h>

int main() {
    char Estado[2], Cidade[50], Estado2[2], Cidade2[50]; 
    int População, pturisticos, População2, pturisticos2;
    float Área, PIB, Área2, PIB2;

    printf("Carta01\n Digite o nome da Cidade: "); 
    scanf("%[^\n]", Cidade);

    printf("Digite a letra do Estado (de A a H): "); 
    scanf(" %[^\n]", Estado);

    printf("Digite a População: "); 
    scanf("%d", &População);

    printf("Digite a Área em km²: "); 
    scanf("%f", &Área);

    printf("Digite o PIB: "); 
    scanf("%f", &PIB); 

    printf("Número de pontos turísticos: "); 
    scanf("%d", &pturisticos);

    // Segunda carta
    
    printf("\nCarta02\n Digite o nome da Cidade: "); 
    scanf(" %[^\n]", Cidade2);

    printf("Digite a letra do Estado (de A a H): "); 
    scanf(" %[^\n]", Estado2);

    printf("Digite a População: "); 
    scanf("%d", &População2);

    printf("Digite a Área em km²: "); 
    scanf("%f", &Área2);

    printf("Digite o PIB: "); 
    scanf("%f", &PIB2); 

    printf("Número de pontos turísticos: "); 
    scanf("%d", &pturisticos2);
    
    printf("\nCarta1\nCidade: %s\nEstado: %s\nCódigo: %s01\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n", 
        Cidade, Estado, Estado, População, Área, PIB, pturisticos);

    printf("\nCarta2\nCidade: %s\nEstado: %s\nCódigo: %s02\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n", 
        Cidade2, Estado2, Estado2, População2, Área2, PIB2, pturisticos2);

    return 0;

}