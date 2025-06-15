#include <stdio.h>

int main() {
    // Seção 1: Leitura e exibição de peso
    float peso_usuario = 0.0;
    
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso_usuario);
    printf("Peso informado: %.2f kg\n", peso_usuario);

    // Seção 2: Leitura de peso e altura
    float altura_usuario = 0.0;
    
    printf("\nDigite sua altura em metros: ");
    scanf("%f", &altura_usuario);
    printf("Peso: %.2f kg | Altura: %.2f m\n", peso_usuario, altura_usuario);

    // Seção 3: Cálculo do IMC
    float indice_imc = peso_usuario / (altura_usuario * altura_usuario);
    printf("\nSeu IMC é: %.2f\n", indice_imc);

    // Seção 4: Estruturas condicionais
    int valor_teste = 100;
    
    printf("\n--- Testes Condicionais ---\n");
    
    // Condição simples
    if (valor_teste < 100) {
        printf("1. Valor menor que 100\n");
    }

    // Condições separadas
    if (valor_teste < 100) {
        printf("2. Valor menor que 100\n");
    }
    if (valor_teste >= 100) {
        printf("2. Valor maior ou igual a 100\n");
    }

    // Condição if-else
    if (valor_teste < 100) {
        printf("3. Valor menor que 100\n");
    } else {
        printf("3. Valor maior ou igual a 100\n");
    }

    // Condição if-else if-else
    if (valor_teste < 100) {
        printf("4. Valor menor que 100\n");
    } else if (valor_teste >= 100 && valor_teste < 200) {
        printf("4. Valor entre 100 e 200\n");
    } else {
        printf("4. Valor maior ou igual a 200\n");
    }

    return 0;
}