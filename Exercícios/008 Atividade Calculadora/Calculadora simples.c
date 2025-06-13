#include <stdio.h>

// Declaração da função que realiza os cálculos
float myfunction(float num1, float num2, char op);

int main() {
    float n1, n2, resultado;  // Variáveis para os números e resultado
    char operador;            // Variável para o operador matemático

    // Loop infinito para a calculadora ficar rodando continuamente
    while(1) {
        // Entrada do primeiro número
        printf("Informe um numero: ");
        scanf("%f", &n1);

        // Entrada do operador matemático
        printf("Operadores: +, -, *, /: ");
        scanf(" %c", &operador);  // Espaço antes do %c para ignorar whitespaces

        // Entrada do segundo número
        printf("Informe um numero: ");
        scanf("%f", &n2);

        // Chama a função de cálculo e armazena o resultado
        resultado = myfunction(n1, n2, operador);
        
        // Exibe o resultado com 2 casas decimais
        printf("%.2f\n", resultado);
    }

    return 0;
}

// Função que realiza as operações matemáticas
float myfunction(float num1, float num2, char op) {
    float res;  // Variável para armazenar o resultado
    
    // Switch case para determinar a operação
    switch (op) {
        case '+':  // Soma
            res = num1 + num2;
            break;
        case '-':  // Subtração
            res = num1 - num2;
            break;
        case '*':  // Multiplicação
            res = num1 * num2;
            break;
        case '/':  // Divisão
            if (num2 == 0) {
                printf("Divisão por zero nao existe.\n");
                res = 0;  // Retorna 0 em caso de divisão por zero
            } else {
                res = num1 / num2;
            }
            break;
        default:  // Operador inválido
            printf("Operador invalido.\n");
            res = 0;  // Retorna 0 para operador inválido
            break;
    }

    return res;  // Retorna o resultado da operação
}