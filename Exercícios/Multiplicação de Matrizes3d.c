#include <stdio.h>
/*Para que a multiplicação seja possível, o número de colunas da primeira amtriz deve ser igual 
ao número de linhas da segunda matriz. Neste caso, o exemplo utiliza matrizes com as mesmas profundidas*/

void imprime(int linha, int coluna, int altura, int vet[linha][coluna][altura]){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            for(int k = 0; k < altura; k++){
                printf("%3d ", vet[i][j][k]);
            }
           // printf("\n");
        }
        printf("\n");
    }
}

int main(){
    int filasA = 5, colunasA = 5, profundidadeA = 5;
    int vetorA[filasA][colunasA][profundidadeA];
    int filasB = 5, colunasB = 5, profundidadeB = 5;
    int vetorB[filasB][colunasB][profundidadeB];
    int vetor_resultado[filasA][colunasB][profundidadeA];

    //matriz A
    for(int i = 0; i < filasA; i++){
        for(int j = 0; j < colunasA; j++){
            for(int k = 0; k < profundidadeA; k++){
                vetorA[i][j][k] = i + j + k;
            }
        }
    }
    printf("Matriz 1:\n");
    imprime(filasA, colunasA, profundidadeA, vetorA);

    //matriz 2s
    printf("\n");
    for(int i = 0; i < filasB; i++){
        for(int j = 0; j < colunasB; j++){
            for(int k = 0; k < profundidadeB; k++){
                vetorB[i][j][k] = i + j + k;
            }
        }
    } 
    printf("Matriz 2:\n");
    imprime(filasB, colunasB, profundidadeB, vetorB);

    //Multiplicação das matrizes por camadas
    for(int k = 0; k < profundidadeA; k++){ //Para cada camada
        for(int i = 0; i < filasA; i++){ //Para cada linha de A
            for(int j = 0; j < colunasB; j++){ //Para cada coluna de B
                //Inicializa o vetor resultado
                vetor_resultado[i][j][k] = 0;
                //Calcula o produto
                for(int l = 0; l < colunasA; l++){ // Soma dos produtos
                    vetor_resultado[i][j][k] += vetorA[i][l][k] * vetorB[l][j][k];
                }
            }
        }

    }
    printf("\n");
    printf("Matriz Resultado:\n");
    imprime(filasA, colunasB, profundidadeA, vetor_resultado);

    return 0;
}