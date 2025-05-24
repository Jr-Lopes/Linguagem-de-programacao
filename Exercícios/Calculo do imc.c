#include <stdio.h>

int main(){
    float altura, peso, imc;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Sua altura é %2.f e seu peso é %.2f\n", altura, peso);

    imc = peso / (altura * altura);
    printf("Seu IMC é %.2f\n", imc);

    if (imc < 18.5){
        printf("Classificação: IMC < 18.5 = MAGREZA\n");
    }else if (imc >= 18.5 && imc < 25){
        printf("Classificação 18.5 <= IMc < 25 = NORMAL\n");
    }else if (imc > 25 && imc < 39.9){
        printf("Classificação: 25 < IMC < 39.9 = SOBREPESO\n");
    }else if (imc > 30 && imc < 39.9){
        printf("Classificação: 30 < IMC < 39,9 = OBESIDADE\n");
    }else{
        printf("Classificação: IMC > 40 = OBESIDADE GRAVE\n");
    }

    return 0;
    
    }
