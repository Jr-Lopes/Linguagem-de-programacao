#include <stdio.h>

float myfunction(float num1, float num2, char op);

int main(){
    float n1, n2, resultado;
    char operador;

    while(1){
        printf("Informe um numero: ");
        scanf("%f", &n1);

        printf("Operadores: +, -, *, /: ");
        scanf(" %c", &operador);

        printf("Informe um numero: ");
        scanf("%f", &n2);

    resultado = myfunction(n1, n2, operador);
    printf("%.2f\n", resultado);
    }

    return 0;
}
    float myfunction(float num1, float num2, char op){
    float res;
    switch (op){
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 == 0){
                printf("Divisão por zero nao existe.\n");
            }
            res = num1 / num2;
            break;
        default:
            printf("Operador invalido.\n");
            break;
        }

        return res;
}
