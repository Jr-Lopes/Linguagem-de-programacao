#include <stdio.h>
#include <stdlib.h> // Para a função atoi()

int main(int argc, char *argv[]) {
    int numero_dia = 0; // Variável mais descritiva

    // Verificação dos argumentos
    if(argc == 2) {
        // Converte o argumento para inteiro
        numero_dia = atoi(argv[1]);
    }
    else if(argc > 2) {
        printf("Erro: Muitos argumentos fornecidos.\n");
        printf("Uso correto: %s <numero_dia>\n", argv[0]);
        return 1;
    }
    else {
        printf("Erro: Argumento faltando.\n");
        printf("Por favor, entre com o dia da semana (1-7).\n");
        printf("Exemplo: %s 3\n", argv[0]);
        return 1;
    }

    // Switch para determinar o dia da semana
    switch(numero_dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n"); // Padronizado com hífen
            break;
        case 3: 
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5: 
            printf("Quinta-feira\n");
            break;
        case 6: 
            printf("Sexta-feira\n"); // Padronizado
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Erro: Dia inválido. Digite um número entre 1 e 7.\n");
            return 1;
    }

    return 0;
}