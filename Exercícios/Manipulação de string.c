#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    char sobre_nome[50];
    char nome_completo[100] = " ";
    int tamanho = 0, i = 0;
    char *ponteiro;
    
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sobre nome: ");
    gets(sobre_nome);
    
    strcpy(nome_completo, nome); //'strcpy' serve para copiar string de um local de memoria para outro
    strcat(nome_completo, " "); //'strcat' serve para juntar duas strings 
    strcat(nome_completo, sobre_nome);
    
    tamanho = strlen(nome_completo);
    printf("O tamanho da string e: %d\n", tamanho);
    printf("Seu nome completo e: %s\n", nome_completo);

    printf("\n");
    printf("O seu nome completo na vertical:\n");
    while(nome_completo[i] != '\0'){
        printf("%c\n", nome_completo[i++]);
    }
    
    printf("\nO seu nome de trás para frente:");
    for(i = tamanho - 1; i >= 0; i--){
        printf("%c", nome_completo[i]);
    }

    printf("\nA string fatidada:\n");
    ponteiro = strtok(nome_completo, " ");
    while(ponteiro){
        printf("[%s] ", ponteiro);
        ponteiro = strtok(NULL, " ");
    }
    
    
    
    return 0;
}
