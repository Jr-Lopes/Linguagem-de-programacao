#include <stdio.h>

int main() {
    // Define as dimensões do vetor tridimensional (5x5x5)
    int x = 5, y = 5, z = 5;
    
    // Declara um vetor tridimensional com as dimensões especificadas
    int vetor[x][y][z];
    
    // Calcula o tamanho total em bytes do vetor
    int tamanho = sizeof(vetor);

    // ========== PREENCHIMENTO DO VETOR ==========
    // Loop para preencher o vetor tridimensional
    for(int i = 0; i < x; i++){         // Percorre a primeira dimensão (x)
        for(int j = 0; j < y; j++){     // Percorre a segunda dimensão (y)
            for(int k = 0; k < z; k++){ // Percorre a terceira dimensão (z)
                // Atribui a soma dos índices como valor
                vetor[i][j][k] = i + j + k;
            }
        }
    }

    // ========== EXIBIÇÃO DO VETOR ==========
    // Loop para exibir o vetor tridimensional
    for(int i = 0; i < x; i++){         // Percorre a primeira dimensão (x)
        for(int j = 0; j < y; j++){     // Percorre a segunda dimensão (y)
            for(int k = 0; k < z; k++){ // Percorre a terceira dimensão (z)
                // Exibe cada valor com 2 dígitos de largura
                printf("%2d ", vetor[i][j][k]);
            }
        }
        printf("\n");  // Quebra de linha após cada "fatia" x
    }

    // Exibe o tamanho total do vetor em bytes
    printf("O tamanho do vetor: %d\n", tamanho);

    return 0;
}