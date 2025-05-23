#include <stdio.h>
int main(){
    float peso = 0;

    printf("Entre com o seu peso: ");
    scanf("%f", &peso);

    printf("Seu peso = %f\n", peso);

    return 0;
}

/*
#include <stdio.h>

int main(){
    float peso = .0;

    printf("Entre com o seu peso: ");
    scanf("%f", &peso);

    printf("Seu peso = %3.2f\n", peso);

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    float peso = .0, alturo = .0;

    printf("Entre com o seu peso: ");
    scanf("%f", &peso);

    printf("Entre com a sua altura em metros: ");
    scanf("%f", &altura);

    printf("Seu peso = %3.2f e sua altura = %3.2f\n", peso, altura);

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    float peso = .0, alturo = .0;

    printf("Entre com o seu peso: ");
    scanf("%f", &peso);

    printf("Entre com a sua altura em metros: ");
    scanf("%f", &altura);

    printf("Seu peso = %3.2f e sua altura = %3.2f\n", peso, altura);

    float imc = .0;
    imc = peso / (altura * altura);
    printf("Seu IMC = %3.2f\n", imc);

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int var1 = 100;

    if ( var1 < 100 ){
        printf("Valor menor que 100\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int var1 = 100;

    if ( var1 < 100 ){
        printf("Valor menor que 100\n");
    }
    if ( var1 >= 100 ){
        printf("Valor maior ou igual que 100\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int var1 = 100;

    if ( var1 < 100 ){
        printf("Valor menor que 100\n");
    }
    else {
        printf("Valor maior ou igual que 100\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int var1 = 100;

    if ( var1 < 100 ){
        printf("Valor menor que 100\n");
    }
    else if ( var1 >= 100 && var1 < 200 ){
        printf("Valor maior/igual 100 ou menor que 200\n");
    }
    else {
        printf("Valor maior/igual que 200\n");
        }

    return 0;
}
*/

