#include <stdio.h>

// <<<<<Desafio Super Trunfo em Logíca C>>>>> 
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


     printf("******Desafio  Super Trunfo em Logíca C*******\n");
     // Declaração das variáveis para primeira carta.
     char estado1;
     char codigo1[4];
     char cidade1[50];
     int populacao1;
     float area1;
     float pib1; // PIB em bilhoes
     int pontosTuristicos1;
     float densidade1;
     float pib_per_capita1;

     // Declaração das variantes para segunda carta.
     char estado2;
     char codigo2[4];
     char cidade2[50];
     int populacao2;
     float area2;
     float pib2; //PIB em bilhoes
     int pontosTuristicos2;
     float densidade2;
     float pib_per_capita2;


     // Cadastro das Cartas:
 
     // Cadastro da primeira carta.
     printf(" \nCadastro da primeira carta:\n");
     printf(" Digite o estado (A-H):");  //O estado é representado pelas letras de (A-H)
     scanf(" %c", &estado1);
   
     printf(" Digite o código da carta (ex:A01):"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %3s", codigo1);

     printf(" Digite o nome da cidade :"); // Escolha um número de (01-04)
     scanf("%49s", cidade1);

     printf(" Digite a população da cidade:");
     scanf("%d", &populacao1);
 
     printf(" Digite a área da cidade (em km²):");
     scanf("%f", &area1);
 
     printf(" Digite o PIB da cidade:");
     scanf("%f", &pib1); //PIB em bilhoes

     printf(" Digite o número de pontos turísticos:");
     scanf("%d", &pontosTuristicos1);


        // Cadastro da segunda carta.
     printf(" \nCadastro da segunda carta:\n");
     printf(" Digite o estado (A-H):"); //O estado é representado pelas letras de (A-H)
     scanf(" %c", &estado2);

     printf(" Digite o código da carta (ex:B01):"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %3s", codigo2);

     printf(" Digite o nome da cidade:");
     scanf("%49s", cidade2);

     printf(" Digite a população da cidade2:");
     scanf("%d", &populacao2);

     printf(" Digite a área da cidade2(em Km²):");
     scanf("%f", &area2);

     printf(" Digite o PIB da cidade2:");
     scanf("%f", &pib2);

     printf(" Digite os pontos Turísticos2:");
     scanf("%d", &pontosTuristicos2);


     // Cálculo da densidade demográfica e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    //Comparação
    printf("\nComparação entre as Cidades:\n");


    //Populações
    if (populacao1 > populacao2) { 
        printf("Maior População : %s", cidade1);
        
    }

    
    
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
