#include <stdio.h>
int main (){

    //Variaveis carta1
    char estado; 
    char codigo[10];
    char cidade[15]; 
    int populacao;
    float area;
    float PIB; 
    int turisticos;
    
    //Variaveis carta2
    char estado2;
    char codigo2[10];
    char cidade2[15];
    int populacao2;
    float area2;
    float PIB2;
    int turisticos2;

    //Comando para captar a entrada do usuario: ESTADO 
    printf("OBS: Escolha uma letra de A a H\nletra escolhida?: ");
    scanf(" %c", &estado);

    //Comando para captar a entrada do usuario: CODIGO
    printf("OBS: de 01 a 04\nEscolha um codigo para sua cidade: ");
    scanf(" %s", codigo);

    //Comando para captar a entrada do usuario: CIDADE
    printf("Qual a cidade escolhida?: ");
    scanf(" %s", cidade);

    //Comando para captar a entrada do usuario: POPULACAO
    printf("Qual a populacao de cidade escolhida?: ");
    scanf(" %d", &populacao);

    //Comando para captar a entrada do usuario: AREA
    printf("Qual a area da cidade escolhida?: ");
    scanf(" %f", &area);

    //Comando para captar a entrada do usuario: PIB
    printf("Qual o PIB da cidade escolhida?: ");
    scanf(" %f", &PIB);

    //Comando para captar a entrada do usuario: PONTOS TURISTICOS
    printf("Quantos pontos turisticos tem a cidade escolhida?: ");
    scanf(" %d", &turisticos);

    printf("\nCarta 1 cadastrada com sucesso!");
    
    
    //Inicia a linha de cadastro da SEUGNDA CARTA 

    
    //Comando para captar a entrada do usuario: ESTADO 
    printf("\niniciando o processo de cadastro da segunda carta");
    
    printf("\n\nOBS: Escolha uma letra de A a H\nletra escolhida?: ");
    scanf(" %c", &estado2);

    //Comando para captar a entrada do usuario: CODIGO
    printf("OBS: de 01 a 04\nEscolha um codigo para sua cidade: ");
    scanf(" %s", codigo2);

    //Comando para captar a entrada do usuario: CIDADE
    printf("Qual a cidade escolhida?: ");
    scanf(" %s", cidade2);

    //Comando para captar a entrada do usuario: POPULACAO
    printf("Qual a populacao de cidade escolhida?: ");
    scanf(" %d", &populacao2);

    //Comando para captar a entrada do usuario: AREA
    printf("Qual a area da cidade escolhida?: ");
    scanf(" %f", &area2);

    //Comando para captar a entrada do usuario: PIB
    printf("Qual o PIB da cidade escolhida?: ");
    scanf(" %f", &PIB2);

    //Comando para captar a entrada do usuario: PONTOS TURISTICOS
    printf("Quantos pontos turisticos tem a cidade escolhida?: ");
    scanf(" %d", &turisticos2);
    
    //informa ao usuario que o cadastro de cartas foi finalizados 
    printf("Todas as informacoes foram coletadas! confira abaixo.\n");
    
    //imprime ao usuario as informacoes digitadas na primeira carta
    printf("\n\n\nCarta 1\nCodigo da carta: %c%s\nCidade: %s\nPopulacao: %d\nArea: %f\nPIB: %f\nPontos Turisticos: %d", estado, codigo, cidade, populacao, area, PIB, turisticos);

    
    //imprime ao usuario as informacoes digitadas na segunda carta
    printf("\n\nCarta 2\nCodigo da carta: %c%s\nCidade: %s\nPopulacao: %d\nArea: %f\nPIB: %f\nPontos Turisticos: %d", estado2, codigo2, cidade2, populacao2, area2, PIB2, turisticos2);



return 0;

}