#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  char nomeCidade[50];
    int populacao;
    char nomeCidade2[50];
    int populacao2;

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomeCidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite o nome da cidade 2: ");
    scanf("%49s", nomeCidade2);

    printf("Digite a populacao 2: ");
    scanf("%d", &populacao2);

    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);


    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);

return 0;
} 
