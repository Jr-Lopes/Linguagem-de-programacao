#include <stdio.h>  // Inclui a biblioteca padrão de entrada/saída

int main() {
    // Exibe o tamanho em bytes do tipo 'int' na arquitetura atual
    printf("Numero de bytes de int: %li\n", sizeof(int));
    
    // Exibe o tamanho em bytes do tipo 'short' na arquitetura atual
    printf("Número de bytes de short: %li\n", sizeof(short));
    
    // Exibe o tamanho em bytes do tipo 'long' na arquitetura atual
    printf("Número de bytes de long: %li\n", sizeof(long));
    
    // Exibe o tamanho em bytes do tipo 'signed' (equivalente a 'signed int')
    printf("Número de bytes de signed: %li\n", sizeof(signed));
    
    // Exibe o tamanho em bytes do tipo 'unsigned' (equivalente a 'unsigned int')
    printf("Número de bytes de unsigned: %li\n", sizeof(unsigned));
    
    return 0;  // Retorna 0 indicando execução bem-sucedida
}