#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char nome[100];
    int cont = 0, total = 0;
    
    // Solicita e lê o nome do usuário (usando fgets por segurança)
    printf("Informe um nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove a quebra de linha
    
    total = strlen(nome);  // Obtém o comprimento total da string
    
    // 1. Calcula tamanho da string (excluindo espaços)
    for(int i = 0; i < total; i++) {
        if(isspace(nome[i])) {
            cont++;
        }
    }
    printf("Tamanho da string: %i\n", total - cont);
    
    // 2. Converte para maiúsculas
    printf("Nome em maiusculo: ");
    for(int i = 0; i < total; i++) {
        printf("%c", toupper(nome[i]));
    }
    
    // 3. Converte para minúsculas
    printf("\nSeu nome em minusculo: ");
    for(int i = 0; i < total; i++) {
        printf("%c", tolower(nome[i]));
    }
    
    // 4. Verifica se contém apenas letras
    cont = 0;
    printf("\nO nome informado tem apenas letras: ");
    for(int i = 0; i < total; i++) {
        if(isspace(nome[i])) {
            continue;
        }
        else if(isalpha(nome[i])) {
           cont++;
        }
    }
    printf(cont == (total - strspn(nome, " ")) ? "True" : "False");
    
    // 5. Verifica se é alfanumérico
    cont = 0;
    printf("\nO nome informado é alfanumérico: ");
    for(int i = 0; i < total; i++) {
        if(isalnum(nome[i])) {
            cont++;
        }
    }
    printf(cont == total ? "True" : "False");
    
    // 6. Ordena os caracteres em ordem alfabética (Bubble Sort)
    char temp;
    for(int i = 0; i < total; i++) {
        for(int j = i + 1; j < total; j++) {
            if(nome[i] > nome[j]) {
                temp = nome[i];
                nome[i] = nome[j];
                nome[j] = temp;
            }
        }   
    }
    
    // Exibe os caracteres ordenados
    printf("\nCaracteres ordenados: ");
    for(int i = 0; i < total; i++) {
       printf("%c ", nome[i]); 
    }
    
    return 0;
}