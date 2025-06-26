#include <stdio.h>

#define N 50 // Define o tamanho máximo da string como 50 caracteres

/**
 * Programa que lê uma frase do usuário e a exibe substituindo
 * espaços por quebras de linha
 * 
 * Funcionamento:
 * 1. Lê uma string/frase usando gets() (inseguro)
 * 2. Percorre a string caractere por caractere
 * 3. Substitui cada espaço por uma quebra de linha
 * 4. Imprime os demais caracteres normalmente
 * 
 * Problemas conhecidos:
 * - Uso inseguro de gets() (risco de buffer overflow)
 * - Comparação incorreta com "\0" (deveria ser '\0')
 * - Possível acesso inválido ao último caractere
 */
int main() {
    char frase[N]; // Buffer para armazenar a frase
    int i = 0;     // Índice para percorrer a string

    printf("Digite uma frase: ");
    gets(frase); // Função perigosa - sem verificação de tamanho

    printf("Voce digitou: \n");
    
    // Loop para processar cada caractere
    while(frase[i] != "\0") {  // ERRO: deveria ser '\0' (aspas simples)
        if(frase[i++] != ' ')  // Se não for espaço
            putchar(frase[i - 1]); // Imprime o caractere
        else
            putchar('\n');     // Substitui espaço por quebra de linha
    }
    
    printf("\n"); // Quebra de linha final
    
    return 0;
}

