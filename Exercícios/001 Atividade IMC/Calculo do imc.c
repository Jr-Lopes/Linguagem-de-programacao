#include <stdio.h>  // Biblioteca padrão para entrada/saída

int main() {
    // Declaração das variáveis
    float altura, peso, imc;  // Armazena altura (m), peso (kg) e IMC calculado

    // Entrada de dados
    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);  // Lê a altura do usuário

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);    // Lê o peso do usuário

    // Exibe os dados informados (altura com 2 casas decimais, peso com 2)
    printf("Sua altura é %.2f e seu peso é %.2f\n", altura, peso);

    // Cálculo do IMC (peso dividido pelo quadrado da altura)
    imc = peso / (altura * altura);
    printf("Seu IMC é %.2f\n", imc);  // Exibe IMC com 2 casas decimais

    // Classificação do IMC de acordo com a OMS
    if (imc < 18.5) {
        printf("Classificação: IMC < 18.5 = MAGREZA\n");
    }
    else if (imc >= 18.5 && imc < 25) {
        printf("Classificação: 18.5 <= IMC < 25 = NORMAL\n");
    }
    else if (imc >= 25 && imc < 30) {  // Corrigido: intervalo 25-29.9
        printf("Classificação: 25 <= IMC < 30 = SOBREPESO\n");
    }
    else if (imc >= 30 && imc < 39.9) {  // Corrigido: intervalo 30-39.9
        printf("Classificação: 30 <= IMC < 39.9 = OBESIDADE\n");
    }
    else {
        printf("Classificação: IMC >= 40 = OBESIDADE GRAVE\n");
    }

    return 0;  // Encerra o programa com sucesso
}