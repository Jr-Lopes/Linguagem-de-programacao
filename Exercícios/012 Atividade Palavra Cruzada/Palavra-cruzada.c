#include <stdio.h>
#include <string.h>

int main() {
    // Declaração da matriz 10x10 e variáveis para armazenar as palavras
    char matriz[10][10];
    char palavra[15], palavra2[15], palavra3[15];
    
    // Entrada da primeira palavra
    printf("Informe uma palavra para a diagonal principal (max 14 caracteres): ");
    fgets(palavra, 15, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';  // Remove a quebra de linha
    int tam = strlen(palavra);
    
    // Entrada da segunda palavra
    printf("Informe uma palavra para a diagonal secundaria (max 14 caracteres): ");
    fgets(palavra2, 15, stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';
    int tam2 = strlen(palavra2);
    
    // Entrada da terceira palavra
    printf("Informe uma palavra para a primeira coluna (max 14 caracteres): ");
    fgets(palavra3, 15, stdin);
    palavra3[strcspn(palavra3, "\n")] = '\0';
    int tam3 = strlen(palavra3);
    
    // Preenchimento da matriz
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            // Preenche com letras minúsculas baseadas na soma dos índices (a-z)
            matriz[i][j] = 97 + (i + j) % 26;
            
            // Preenche a diagonal principal (i == j) com a primeira palavra
            if(i == j && i < tam) {
                matriz[i][j] = palavra[i];
            }
            
            // Preenche a diagonal secundária (i + j == 9) com a segunda palavra
            if(i + j == 9 && i < tam2) {
                matriz[i][9 - i] = palavra2[i];
            }
            
            // Preenche a primeira coluna (j == 0) com a terceira palavra
            if(j == 0 && i < tam3) {
                matriz[i][0] = palavra3[i];
            }
        }
    }
    
    // Impressão da matriz resultante
    printf("\nMatriz Resultante:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}