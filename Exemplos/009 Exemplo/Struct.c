#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Define a estrutura de dados para pessoa
    struct pessoa {
        char nome[50];      // Armazena o primeiro nome (até 49 caracteres)
        char snome[50];     // Armazena o sobrenome (até 49 caracteres)
        int idade;          // Armazena a idade como inteiro
    };

    // Cria uma instância da estrutura
    struct pessoa myPessoa;

    // Interface de cadastro
    printf("\n---------- Cadastro ----------\n");
    
    // Coleta do primeiro nome
    printf("Nome......: ");
    fflush(stdin);  // Limpa buffer de entrada (comportamento não garantido em todos os sistemas)
    fgets(myPessoa.nome, 50, stdin);  // Entrada segura com limite de tamanho
    
    // Coleta do sobrenome
    printf("Sobrenome.: ");
    fflush(stdin);
    fgets(myPessoa.snome, 50, stdin);
    
    // Coleta da idade
    printf("Idade......: ");
    fflush(stdin);
    scanf("%i", &myPessoa.idade);

    // Exibição dos dados cadastrados
    printf("\n---------- Show Cadastro ----------\n");
    printf("Nome..: %s %s", myPessoa.nome, myPessoa.snome);  // %s já inclui o \n do fgets
    printf("Idade.: %i\n", myPessoa.idade);

    return 0;
}