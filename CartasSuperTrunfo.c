#include <stdio.h>

//variaveis da carta 1

int main() {
    int Populacao, NumeroPontosTuristicos;
    float Area, PIB;
    char Estado[15]; 
    char CodCarta[5];  
    char NomeCidade[15];

//index de respostas nas variaveis

    printf("SUPER TRUNFO CIDADES \n");
    printf("Carta 1 \n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado);  

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", CodCarta);  

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade);  

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroPontosTuristicos);


        int Populacao2, NumeroPontosTuristicos2;
        float Area2, PIB2;
        char Estado2[15]; 
        char CodCarta2[5];  
        char NomeCidade2[15];
    
        //variaveis2 para evitar danificar variavel 1
        //info carta 2 a seguir

        printf("Carta 2 \n");
        printf("Digite o Estado: \n");
        scanf("%s", Estado2);  
    
        printf("Digite o Codigo da Carta: \n");
        scanf("%s", CodCarta2);  
    
        printf("Digite o nome da cidade: \n");
        scanf("%s", NomeCidade2);  
    
        printf("Digite a Populacao: \n");
        scanf("%d", &Populacao2);
    
        printf("Digite a area: \n");
        scanf("%f", &Area2);
    
        printf("Digite o PIB: \n");
        scanf("%f", &PIB2);
    
        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &NumeroPontosTuristicos2);

        //resultados das cartas

        printf("Carta 1: \n");
        printf("Estado: %s  \n", Estado);
        printf("Codigo: %s \n", CodCarta);
        printf("Nome da Cidade: %s \n", NomeCidade);
        printf("Populacao: %d \n", Populacao); 
        printf("Area: %.2f km² \n", Area);  
        printf("PIB: %.2f bilhões de reais \n", PIB);  
        printf("Numero de Pontos turisticos: %d \n", NumeroPontosTuristicos);
    
    
        printf("Carta 2: \n");
        printf("Estado: %s  \n", Estado2);
        printf("Codigo: %s \n", CodCarta2);
        printf("Nome da Cidade: %s \n", NomeCidade2);
        printf("Populacao: %d \n", Populacao2); 
        printf("Area: %.2f km² \n", Area2);  
        printf("PIB: %.2f bilhões de reais \n", PIB2);  
        printf("Numero de Pontos turisticos: %d \n", NumeroPontosTuristicos2);
    
        return 0; 

}