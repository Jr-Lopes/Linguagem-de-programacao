#include <stdio.h>
#include <time.h>

int main() {
    int x = 5, y = 5, z = 5;
    int vetor[x][y][z];
    int tamanho = sizeof(vetor);

    // Gerar o vetor tridimencional
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            for(int k = 0; k < z; k++){
                vetor[i][j][k] = i + j + k;
            }
        }
    }

    // Mostrar na tela o vetor
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            for(int k = 0; k < z; k++){
                printf("%2d ", vetor[i][j][k]);
            }
        }
        printf("\n");
    }

    printf("O tamanho do vetor: %d\n", tamanho);

    return 0;
}