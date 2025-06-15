#include <stdio.h>

int main() {
    printf("=== Demonstração de Loops For em C ===\n\n");

    // Exemplo 1: Loop com erro de incremento (intencional para demonstração)
    printf("\n1. Loop com erro de incremento (i + 1 não modifica i):\n");
    for (int contador = 0; contador < 10; contador + 1) {
        printf("Valor de contador: %i\n", contador);
        // Este loop é infinito porque contador nunca é incrementado
        break; // Adicionado para não travar o programa
    }

    // Exemplo 2: Loop básico correto
    printf("\n2. Loop básico incrementando de 1 em 1:\n");
    for (int contador = 0; contador < 10; contador++) {
        printf("Valor de contador: %i\n", contador);
    }

    // Exemplo 3: Loop incrementando de 2 em 2
    printf("\n3. Loop incrementando de 2 em 2:\n");
    for (int contador = 0; contador < 10; contador += 2) {
        printf("Valor de contador: %i\n", contador);
    }

    // Exemplo 4: Loop decrescente
    printf("\n4. Loop decrescente de 9 até 0:\n");
    for (int contador = 9; contador >= 0; contador--) {
        printf("Valor de contador: %i\n", contador);
    }

    // Exemplo 5: Tentativa de acessar variável após o loop (erro de escopo)
    printf("\n5. Tentativa de acessar variável após o loop:\n");
    for (int contador = 0; contador < 10; contador++) {
        printf("Valor dentro do loop: %i\n", contador);
    }
    // printf("Valor após o loop: %i\n", contador); // Isso causaria erro de compilação

    // Exemplo 6: Loops aninhados
    printf("\n6. Loops aninhados (i e j):\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("Linha: %i, Coluna: %i\n", linha, coluna);
        }
    }

    return 0;
}