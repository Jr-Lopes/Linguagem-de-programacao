#include <stdio.h>

float razao(float n1, float n2) {
    return n1 / n2;
}

int main() {
    int resp, carro;
    float valor_gasolina, valor_etanol, valor_gnv;
    
    printf("----- COMBUSTIVEIS -----");
    printf("\nInforme o valor da gasolina: R$");
    scanf("%f", &valor_gasolina);

    while(valor_gasolina <= 0) {
        printf("O valor deve ser maior do que zero. Tente Novamente!");
        printf("\nInforme o valor da gasolina: R$");
        scanf("%f", &valor_gasolina);
    }

    printf("Informe o valor do etanol: R$");
    scanf("%f", &valor_etanol);

    while(valor_etanol <= 0) {
        printf("O valor deve ser maior do que zero. Tente Novamente!");
        printf("\nInforme o valor do etanol: R$");
        scanf("%f", &valor_etanol);
    }

    printf("Consultar o GNV SIM[1] NAO[2]: ");
    scanf("%d", &resp);

    while(resp != 1 && resp != 2) {
        printf("Resposta INCORRETA. Tente novamente!\nConsultar o GNV SIM[1] NAO[2]: ");
        scanf("%d", &resp);
    }

    if (resp == 1) {
        printf("Informe o valor do GNV: R$ ");
        scanf("%f", &valor_gnv);

        while(valor_gnv <= 0) {
            printf("O valor deve ser maior do que zero. Tente Novamente!");
            printf("\nInforme o valor do GNV: R$");
            scanf("%f", &valor_gnv);
        }
    }
    
    float consumo_gasolina, consumo_etanol, consumo_gnv;
    float custo_km_gasolina, custo_km_etanol, custo_km_gnv;

    printf("\nEscolha o carro:\n");
    printf("1 - Toyota Corolla\n");
    printf("2 - Chevrolet Opala\n");
    printf("Digite sua opcao [1 ou 2]: ");
    scanf("%d", &carro);

    while(carro != 1 && carro != 2) {
        printf("Opcao invalida. Digite 1 ou 2: ");
        scanf("%d", &carro);
    }

    if (carro == 1) {
        consumo_gasolina = 11.9;
        consumo_etanol = 8.0;
    } else if (carro == 2) {
        consumo_gasolina = 7.9;
        consumo_etanol = 6.61;
    }

    custo_km_gasolina = razao(valor_gasolina, consumo_gasolina);
    custo_km_etanol = razao(valor_etanol, consumo_etanol);

    printf("\nCusto por quilometro:\n");
    printf("Gasolina: R$ %.3f/km\n", custo_km_gasolina);
    printf("Etanol: R$ %.3f/km\n", custo_km_etanol);
    
    if (resp == 1) {
        consumo_gnv = 12.0;
        custo_km_gnv = razao(valor_gnv, consumo_gnv);
        printf("GNV: R$ %.3f/km\n", custo_km_gnv);

        if (custo_km_gnv < custo_km_gasolina && custo_km_gnv < custo_km_etanol) {
            printf("Recomendacao: Abastecer com GNV\n");
        } else if (custo_km_etanol < custo_km_gasolina) {
            printf("Recomendacao: Abastecer com ETANOL\n");
        } else {
            printf("Recomendacao: Abastecer com GASOLINA\n");
        }
    } else {
        if (custo_km_etanol < custo_km_gasolina) {
            printf("Recomendacao: Abastecer com ETANOL\n");
        } else {
            printf("Recomendacao: Abastecer com GASOLINA\n");
        }
    }
    
    return 0;
}