#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double num[20];
    char operadores[20];
    int total_numeros = 0;
    int total_operadores = 0;

    for (int i = 1; i < argc; i++){
        if (i % 2 == 1){
            num[total_numeros] = atof(argv[i]);
            total_numeros++;
        }else{
            operadores[total_operadores] = argv[i];
            total_operadores++;
        }
    }

    for(int i = 0; i < total_operadores; i++){
        if(operadores[i] == '*' || operadores[i] == '/'){
            double resultado;
            if(operadores[i] == '*'){
                resultado = num[i] * num[i + 1];
            }else{
                resultado = num[i] / num[i + 1];
            }
            }
    }

    for(int i = 0; i < total_operadores; i++){
        if(operadores[i] == '+' || operadores[i] == '-'){
            double resultado;
            if(operadores[i] == '+'){
                resultado = num[i] + num[i+1];
            }else{
                resultado = num[i] - num[i + 1];
            }
            }
        }

        for(int i = 0; i < 5; i++){
            printf("%d", num[total_numeros]);
        }

    return 0;
}