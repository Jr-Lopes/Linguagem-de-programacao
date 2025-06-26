#include <stdio.h>
#include <stdlib.h>

/**
 * Programa que cria e exibe uma matriz 10x10 onde cada elemento
 * é a soma dos seus índices (i + j)
 * 
 * Parâmetros:
 *   argc - contador de argumentos (não utilizado)
 *   argv - array de argumentos (não utilizado)
 * 
 */
int main(int argc, char *argv[]) {
    // Define as dimensões da matriz como 10x10
    int linhas = 10;
    int colunas = 10;

    // Declara a matriz com as dimensões especificadas
    int myMatriz[linhas][colunas];

    /**
     * Preenche a matriz com valores:
     * Cada elemento myMatriz[i][j] recebe a soma i + j
     * 
     * Estrutura:
     * - Loop externo percorre as linhas (i de 0 a 9)
     * - Loop interno percorre as colunas (j de 0 a 9)
     */
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            myMatriz[i][j] = i + j;
        }
    }

    /**
     * Exibe a matriz formatada com informações de índices e valores:
     * - Para cada linha, mostra o índice 'i'
     * - Para cada coluna, mostra o índice 'j' e o valor correspondente
     * - Insere quebra de linha ao final de cada linha da matriz
     */
    for(int i = 0; i < linhas; i++) {
        printf("i = %i ", i);  // Mostra o índice da linha atual
        for(int j = 0; j < colunas; j++) {
            printf("j = %i value = %i ", j, myMatriz[i][j]);
        }
        printf("\n");  // Nova linha para próxima linha da matriz
    }

    return 0;
}
