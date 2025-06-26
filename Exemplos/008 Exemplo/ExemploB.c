#include <stdio.h>

#define N 10 // Define o tamanho máximo da string como 10 caracteres

/**
 * Programa que lê uma cor do usuário e exibe:
 * 1. A cor completa em uma linha
 * 2. Cada caractere da cor em linhas separadas
 * 
 * Funcionamento:
 * - Armazena a entrada em um array de caracteres
 * - Mostra a string completa
 * - Percorre caractere por caractere até encontrar o terminador nulo
 * 
 * Observações:
 * - Limite máximo de 9 caracteres úteis + terminador '\0'
 * - Não protege contra overflow (usuário pode digitar mais que N-1 caracteres)
 */
int main() {
    char cor1[N]; // Array para armazenar a string (cor)
    int i = 0;    // Contador/índice para percorrer a string

    // Solicita e lê a entrada do usuário
    printf("Digite uma cor: ");
    scanf("%s", cor1); // Lê a string (atenção: sem proteção contra overflow)

    // Exibe a string completa
    printf("Cor: %s\n", cor1);

    // Percorre e exibe cada caractere individualmente
    while(cor1[i] != '\0') { // Enquanto não chegar no final da string
        printf("%c\n", cor1[i++]); // Exibe o caractere atual e incrementa o índice
    }

    return 0; 
}

