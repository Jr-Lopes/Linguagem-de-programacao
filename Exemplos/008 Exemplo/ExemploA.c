#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int linhas = 10;
    int colunas = 10;

    int myMatriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            myMatriz[i][j] = i + j;
        }
    }

    for(int i = 0; i < linhas; i++){
        printf("i = %i ", i);
        for( int j = 0; j < colunas; j++){
            printf("j = %i value = %i ", j, myMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
