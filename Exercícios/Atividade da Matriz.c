#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double time1, time2;
    int x = 1000, y = 500, soma = 0;
    int matriz[x][y]; 

    start = clock();
    for (int i = 0; i < x; i++) {       
        for (int j = 0; j < y; j++) {   
            matriz[i][j] = i + j;
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    end = clock();
    time1 = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Soma 
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {  
            soma += matriz[i][j];
        }
    }


    x = 500;   // Linhas
    y = 1000;  // Colunas
    start = clock();
    for (int i = 0; i < x; i++) {      
        for (int j = 0; j < y; j++) {  
            matriz[i][j] = i + j;
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
           printf("%d ", matriz[i][j]);
        }
    }
    end = clock();
    time2 = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nO resultado da soma matriz 1: %d\n", soma);
    printf("\n");
    printf("Tempo de execucao 1: %f segundos\n", time1);
    printf("Tempo de execucao 2: %f segundos\n", time2);
    printf("A diferenca entre os tempos de execucao: %f segundos\n", time1 - time2);

    return 0;
}