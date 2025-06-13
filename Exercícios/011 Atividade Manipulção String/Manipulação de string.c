#include <stdio.h>      
#include <string.h>     
#include <conio.h>      
#include <stdlib.h>     

int main() {
    // Declaração de variáveis
    char nome[50];              // Armazena o primeiro nome (até 49 caracteres)
    char sobre_nome[50];        // Armazena o sobrenome (até 49 caracteres)
    char nome_completo[100] = " ";  // Armazena nome completo (inicializado com espaço)
    int tamanho = 0, i = 0;     // Variáveis auxiliares
    char *ponteiro;             // Ponteiro para manipulação de strings

    // Entrada de dados
    printf("Digite seu nome: ");
    gets(nome);                 // Lê o nome (não seguro - pode causar buffer overflow)
    printf("Digite seu sobre nome: ");
    gets(sobre_nome);           // Lê o sobrenome (mesmo risco)

    // Processamento das strings
    strcpy(nome_completo, nome);    // Copia o nome para nome_completo
    strcat(nome_completo, " ");     // Adiciona um espaço
    strcat(nome_completo, sobre_nome); // Adiciona o sobrenome

    // Cálculo do tamanho da string
    tamanho = strlen(nome_completo); // Obtém o comprimento da string
    printf("O tamanho da string e: %d\n", tamanho);
    printf("Seu nome completo e: %s\n", nome_completo);

    // Exibição vertical
    printf("\nO seu nome completo na vertical:\n");
    while(nome_completo[i] != '\0') {   // Enquanto não chegar no final da string
        printf("%c\n", nome_completo[i++]);  // Imprime cada caractere em uma linha
    }

    // Exibição invertida
    printf("\nO seu nome de trás para frente:");
    for(i = tamanho - 1; i >= 0; i--) { // Percorre a string do final para o início
        printf("%c", nome_completo[i]);
    }

    // Divisão da string em tokens
    printf("\nA string fatiada:\n");
    ponteiro = strtok(nome_completo, " ");  // Divide a string no primeiro espaço
    while(ponteiro) {                       // Enquanto houver tokens
        printf("[%s] ", ponteiro);          // Imprime cada parte entre colchetes
        ponteiro = strtok(NULL, " ");       // Continua a divisão
    }

    return 0;
}