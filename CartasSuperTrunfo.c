#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis para a primeira carta
    char Estado1;
    char CodigoDaCarta1[3];
    char Cidade1[100];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    float DensidadePopulacional1;
    float PIBperCapita1;
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

    DensidadePopulacional1 = Populacao1 / Area1;
    
    PIBperCapita1 = PIB1 / Populacao1;  

    // Variáveis para a segunda carta
    char Estado2;
    char CodigoDaCarta2[10];
    char Cidade2[20];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    float DensidadePopulacional2;
    float PIBperCapita2;
    int PontosTuristicos2;

    // Lê os dados da segunda carta
    printf("\nInsira uma letra de A a H para o estado da segunda carta: \n");
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

    DensidadePopulacional2 = Populacao2 / Area2;
    
    PIBperCapita2 = PIB2 / Populacao2;
  
    printf("Dados coletados...\n");
    
    // Imprime os dados da primeira carta
    printf("Dados de cadastro a seguir... \n");
    printf("\nDados da primeira carta:\n");
    printf("Codigo da Carta: %c%s\n", Estado1, CodigoDaCarta1);
    printf("Cidade: %s", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.4f\n", PIBperCapita1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
   

    // Imprime os dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Codigo da Carta: %c%s\n", Estado2, CodigoDaCarta2);
    printf("Cidade: %s", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.4f\n", PIBperCapita2); 
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("\nSuas cartas foram cadastardas com sucesso!\n");

    
    // Inicia o duelo de cartas
    printf("\nBem vindo ao Duelo de Cartas: Qual cidade sera a vencedora desse duelo? \n1 para a primeira carta e 0 para a Segunda carta cadastrada!\n");

    printf("\nQual cidade tem a maior populacao? \n");
    printf("A cidade com a maior populacao e? %d\n", Populacao1 > Populacao2 );
   
    printf("\nQual cidade tem a maior area? \n");
    printf("A cidade com a maior area e? %d\n", Area1 > Area2 );
    
    printf("\nQual cidade com o maior PIB? \n");
    printf("A cidade com o maior PIB e? %d\n", PIB1 > PIB2 );

    
    printf("\nQual cidade tem a Densidade Populacional mais forte? sendo 0 para a cidade 1 e 1 para a cidade dois \n");
    printf("A Densidade Populacional vencedora e? %d\n", DensidadePopulacional1 < DensidadePopulacional2 );

    printf("\nQual cidade tem o maior PIB per Capita? \n");
    printf("A cidade com o maior PIB per Capita e? %d\n", PIBperCapita1 > PIBperCapita2 );

    printf("\nQual cidade tem o maior numero de pontos turisticos? \n");
    printf("A cidade com o maior numero de pontos turisticos e? %d\n", PontosTuristicos1 > PontosTuristicos2 );

    float somaCidade1 = Populacao1 + Area1 + PIB1 + DensidadePopulacional1 + PIBperCapita1 + PontosTuristicos1;
    float somaCidade2 = Populacao2 + Area2 + PIB2 + DensidadePopulacional2 + PIBperCapita2 + PontosTuristicos2;

    // Determina qual cidade usará o superpoder
    float superpoder = (somaCidade1 > somaCidade2);   
    printf("\nHORA DO SUPER PODER!!!? \n");
    printf("Qual cidade ira usar o super poder? 1 para a primeira Cidade e 0 para a segunda cidade \n");
    printf("A Cidade %d usou o Super Poder!\n", superpoder);
   
    return 0;
}