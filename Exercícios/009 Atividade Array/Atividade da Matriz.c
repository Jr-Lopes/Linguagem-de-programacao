#include <stdio.h>   
#include <time.h>    

int main() {
    // Variáveis para medição de tempo
    clock_t start, end;  // Tipo especial para armazenar tempos de clock
    double time1, time2; // Variáveis para armazenar tempos em segundos
    
    // Primeira matriz: 1000 linhas x 500 colunas
    int x = 1000, y = 500, soma = 0;
    int matriz[x][y];  // Declaração da matriz

    // --- PRIMEIRA EXECUÇÃO (1000x500) ---
    start = clock();  // Inicia contagem do tempo
    
    // Preenche a matriz com valores i+j
    for (int i = 0; i < x; i++) {       
        for (int j = 0; j < y; j++) {   
            matriz[i][j] = i + j;  // Cada elemento é a soma dos índices
        }
    }
    
    // Imprime todos os elementos da matriz
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", matriz[i][j]);  // Espaço separando os números
        }
    }
    
    end = clock();  // Finaliza contagem do tempo
    time1 = ((double)(end - start)) / CLOCKS_PER_SEC;  // Converte para segundos

    // Calcula a soma de todos os elementos da primeira matriz
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {  
            soma += matriz[i][j];  // Acumula a soma
        }
    }

    // --- SEGUNDA EXECUÇÃO (500x1000) ---
    x = 500;   // Agora com 500 linhas
    y = 1000;  // E 1000 colunas (mesmo número total de elementos)
    
    start = clock();  // Reinicia contagem do tempo
    
    // Preenche a matriz novamente (com novas dimensões)
    for (int i = 0; i < x; i++) {      
        for (int j = 0; j < y; j++) {  
            matriz[i][j] = i + j;  // Mesmo esquema de preenchimento
        }
    }
    
    // Imprime todos os elementos da nova configuração
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
           printf("%d ", matriz[i][j]);
        }
    }
    
    end = clock();  // Finaliza contagem
    time2 = ((double)(end - start)) / CLOCKS_PER_SEC;  // Tempo em segundos

    // --- RESULTADOS ---
    printf("\nO resultado da soma matriz 1: %d\n", soma);  // Exibe soma acumulada
    printf("\n");
    printf("Tempo de execucao 1: %f segundos\n", time1);  // Tempo 1000x500
    printf("Tempo de execucao 2: %f segundos\n", time2);  // Tempo 500x1000
    printf("A diferenca entre os tempos de execucao: %f segundos\n", time1 - time2);

    return 0;  // Fim do programa
}