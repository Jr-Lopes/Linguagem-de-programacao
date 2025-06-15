#include <stdio.h>
#include <stdbool.h>  // Para o tipo bool

int main() {
    // Exemplo 1: Trabalhando com caracteres
    char letra_maiuscula = 'B';  // Nome mais descritivo

    printf("1. Exemplo com caracteres:\n");
    printf("   Valor decimal de '%c' = %d\n", letra_maiuscula, letra_maiuscula);

    if (letra_maiuscula == 'b') {
        printf("   A letra é 'b' minúsculo (%c)\n", letra_maiuscula);
    } else {
        printf("   A letra não é 'b' minúsculo, é (%c)\n", letra_maiuscula);
    }

    // Exemplo 2: Trabalhando com booleanos
    printf("\n2. Exemplo com booleanos:\n");
    bool condicao = true;  // Nome mais descritivo

    if (condicao) {
        printf("   Verdadeiro (%d)\n", condicao);
    } else {
        printf("   Falso (%d)\n", condicao);
    }

    return 0;
}