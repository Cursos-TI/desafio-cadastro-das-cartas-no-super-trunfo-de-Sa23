#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CARTAS 100 // Define o tamanho máximo do array de cartas

// Estrutura para representar uma carta
typedef struct {
    char Codigo[50];
    char Pais[100];
    char Cidade[100];
    double Populacao;
    double Area;
    double PIB;
    int Pontos;
} Carta;

int main() {
    char Codigo[50];
    char Pais[100];
    char Cidade[100];
    double Populacao;
    double Area;
    double PIB;
    int Pontos;
    
    Carta cartas[MAX_CARTAS]; // Array para armazenar as cartas
    int contadorCartas = 0; // Contador de cartas cadastradas

    // Loop para cadastrar as cartas
    while (1) {
        char entrada[100];

        // Comando para inserir pais//
        printf("Em qual pais fica a cidade que deseja selecionar?:\n");
        fgets(Pais, sizeof(Pais), stdin);
        Pais[strcspn(Pais, "\n")] = 0;
        printf("Pais: %s\n", Pais);

        // Comando para inserir cidade//
        printf("Insira qual cidade escolheu:\n");
        fgets(Cidade, sizeof(Cidade), stdin);
        Cidade[strcspn(Cidade, "\n")] = 0;
        printf("Cidade escolhida: %s\n", Cidade);

        // Comando para inserir código//
        printf("Qual o Codigo da carta com a sigla e DDD?:\n");
        scanf(" %[^\n]", Codigo); // Lê a string com espaços
        printf("Codigo: %s\n", Codigo);
        getchar(); // Limpa o buffer de entrada

        // Comando para inserir população//
        printf("Qual a populacao da Cidade escolhida?:\n");
        scanf(" %lf", &Populacao);
        printf("Populacao: %lf\n", Populacao);

        // Comando para inserir Area//
        printf("Qual a area da cidade escolhida em km?:\n");
        scanf("%lf", &Area);
        printf("area: %.2lf km²\n", Area);

        // Comando para inserir PIB//
        printf("Qual o PIB da cidade que escolheu?:\n");
        scanf(" %lf", &PIB);
        printf("PBI: %lf\n", PIB);
        getchar();
        
        // Comando para inserir pontos turísticos//
        printf("Quantos pontos turisticos tem a cidade selecionada?:\n");
        fgets(entrada, 100, stdin);
        entrada[strcspn(entrada, "\n")] = 0;
        Pontos = atoi(entrada);
        printf("Pontos turisticos: %d\n", Pontos);
       
        
        // Armazena a carta no array
        strcpy(cartas[contadorCartas].Codigo, Codigo);
        strcpy(cartas[contadorCartas].Pais, Pais);
        strcpy(cartas[contadorCartas].Cidade, Cidade);
        cartas[contadorCartas].Populacao = Populacao;
        cartas[contadorCartas].Area = Area;
        cartas[contadorCartas].PIB = PIB;
        cartas[contadorCartas].Pontos = Pontos;

        contadorCartas++; // Incrementa o contador de cartas

        printf("Carta cadastrada com sucesso!\n");
        printf("Total de cartas cadastradas: %d\n", contadorCartas);

        // Pergunta se o usuário deseja cadastrar mais cartas
        printf("Deseja cadastrar mais cartas? (s/n)\n");
        fgets(entrada, 100, stdin);
        entrada[strcspn(entrada, "\n")] = 0;
        if (entrada[0] != 's') {
            break; // Sai do loop se o usuário digitar 'n'
        }
    }

    // Imprime as cartas cadastradas
    printf("\nCartas Cadastradas:\n");
    for (int i = 0; i < contadorCartas; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Codigo: %s\n", cartas[i].Codigo);
        printf("Pais: %s\n", cartas[i].Pais);
        printf("Cidade: %s\n", cartas[i].Cidade);
        printf("Populacao: %.2lf\n", cartas[i].Populacao);
        printf("Area: %.2lf km²\n", cartas[i].Area);
        printf("PIB: %.2lf\n", cartas[i].PIB);
        printf("Pontos turísticos: %d\n\n", cartas[i].Pontos);
    }

    return 0;
}


