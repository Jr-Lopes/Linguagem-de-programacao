#include <stdio.h>

int main(){
    int a = 2, b = 3;
    int vetor1[a][b];
    int c = 3, d = 2;
    int vetor2[c][d];
    int vetor3[a][d];

    if(b != c){
        printf("Calculo invalido.");
        return 1;
    }
 
    //Gera a matriz 1
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            vetor1[i][j] = i + j * j;
        }
    }
    
    //Gera a matriz 2
    for(int i = 0; i < c; i++){
        for(int j = 0; j < d; j++){
            vetor2[i][j] = i + j * j;
        }
    }

    printf("Matriz 1:\n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%2d", vetor1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matriz 2:\n");
    for(int i = 0; i < c; i++){
        for(int j = 0; j < d; j++){
            printf("%2d", vetor2[i][j]);
        }
        printf("\n");
    }

    //Inicializar a matriz resultante para n ser preenchida por lixo de memoria
    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            vetor3[i][j] = 0;
        }
    }

    //Multiplicação das matrizes
    for(int i = 0; i < a; i++){ //Percorre as linhas da matriz 1
        for(int j = 0; j < d; j++){ //Percorre as colunas da matriz 2
            for(int k = 0; k < b; k++){ //Percorre as colunas da matriz 1 e linhas da matriz 2
                vetor3[i][j] += vetor1[i][k] * vetor2[k][j];
            }
        }
    }

    printf("\n");
    printf("Resultado:\n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            printf("%2d ", vetor3[i][j]);
        }
        printf("\n");
    }

    return 0;
}