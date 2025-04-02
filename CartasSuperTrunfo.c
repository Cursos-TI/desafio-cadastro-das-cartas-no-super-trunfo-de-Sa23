#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis para a primeira carta
    char Estado1;
    char CodigoDaCarta1[3];
    char Cidade1[100];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Lê os dados da primeira carta
    printf("Insira uma letra de A a H para o estado da primeira carta: \n");
    scanf(" %c", &Estado1);
    printf("Estado: %c\n", Estado1);
    
    // Lê os codigos da carta
    printf("Insira o Codigo da Carta com numeros de 01 a 04: \n");
    scanf(" %s", CodigoDaCarta1);
    printf("Codigo da Carta: %s\n", CodigoDaCarta1);
    
    // Lê o nome da cidade
    printf("Insira o nome da Cidade: ");
    getchar(); // Consome o caractere de nova linha
    fgets(Cidade1, sizeof(Cidade1), stdin);
    printf("Cidade: %s\n", Cidade1);

    // Lê a populacao
    printf("Insira a Populacao da cidade selecionada sem pontuacao: \n");
    scanf(" %d", &Populacao1);
    printf("Populacao: %d\n", Populacao1);

    // Lê a area
    printf("Qual e a area da Cidade selecionada em mk²?: \n");
    scanf(" %f", &Area1);
    printf("Area: %.2f\n", Area1);
    
    // Lê o PIB
    printf("Qual o PIB da Cidade selecionada?: \n");
    scanf(" %f", &PIB1);
    printf("PIB: %.2f\n", PIB1);

    // Lê os pontos turisticos
    printf("Quantos pontos turisticos tem a Cidade que voce selecionou?: \n");
    scanf(" %d", &PontosTuristicos1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    // Variáveis para a segunda carta
    char Estado2;
    char CodigoDaCarta2[10];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

     // Lê os dados da segunda carta
    printf("Insira uma letra de A a H para o estado da segunda carta: \n");
    scanf(" %c", &Estado2);
    printf("Estado: %c\n", Estado2);

    printf("Insira o Codigo da Carta com numeros de 01 a 04: \n");
    scanf(" %s", CodigoDaCarta2);
    printf("Codigo da Carta: %s\n", CodigoDaCarta2);

    printf("Insira o nome da Cidade: ");
    getchar();
    fgets(Cidade2, sizeof(Cidade2), stdin);
    printf("Cidade: %s\n", Cidade2);

    printf("Insira a Populacao da cidade selecionada sem pontuacao: \n");
    scanf(" %d", &Populacao2);
    printf("Populacao: %d\n", Populacao2);

    printf("Qual e a area da Cidade selecionada em mk²?: \n");
    scanf(" %f", &Area2);
    printf("Area: %.2f\n", Area2);

    printf("Qual o PIB da Cidade selecionada?: \n");
    scanf(" %f", &PIB2);
    printf("PIB: %.2f\n", PIB2);

    printf("Quantos pontos turisticos tem a Cidade que voce selecionou?: \n");
    scanf(" %d", &PontosTuristicos2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

   // Imprime os dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da Carta: %s\n", CodigoDaCarta1);
    printf("Cidade: %s", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    // Imprime os dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Codigo da Carta: %c%s\n", Estado1, CodigoDaCarta1);
    printf("Cidade: %s", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    printf("\nSuas cartas foram cadastardas com sucesso!\n");

    return 0;


}