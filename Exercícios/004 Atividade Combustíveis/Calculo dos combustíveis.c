#include <stdio.h>

/* Função que calcula a razão entre dois números (divisão n1/n2) */
float razao(float n1, float n2) {
    return n1 / n2;
}

int main() {
    /* Variáveis de controle e armazenamento */
    int resp, carro;  // resp para GNV, carro para escolha do veículo
    float valor_gasolina, valor_etanol, valor_gnv;  // Preços dos combustíveis
    
    /* ========= ENTRADA DE DADOS ========= */
    
    // Cabeçalho e entrada do valor da gasolina com validação
    printf("----- COMBUSTIVEIS -----");
    printf("\nInforme o valor da gasolina: R$");
    scanf("%f", &valor_gasolina);
    while(valor_gasolina <= 0) {  // Valida valor positivo
        printf("O valor deve ser maior do que zero. Tente Novamente!");
        printf("\nInforme o valor da gasolina: R$");
        scanf("%f", &valor_gasolina);
    }

    // Entrada do valor do etanol com validação
    printf("Informe o valor do etanol: R$");
    scanf("%f", &valor_etanol);
    while(valor_etanol <= 0) {  // Valida valor positivo
        printf("O valor deve ser maior do que zero. Tente Novamente!");
        printf("\nInforme o valor do etanol: R$");
        scanf("%f", &valor_etanol);
    }

    // Consulta sobre GNV com validação de resposta (1 ou 2)
    printf("Consultar o GNV SIM[1] NAO[2]: ");
    scanf("%d", &resp);
    while(resp != 1 && resp != 2) {
        printf("Resposta INCORRETA. Tente novamente!\nConsultar o GNV SIM[1] NAO[2]: ");
        scanf("%d", &resp);
    }

    // Se usuário escolheu GNV, pede o valor com validação
    if (resp == 1) {
        printf("Informe o valor do GNV: R$ ");
        scanf("%f", &valor_gnv);
        while(valor_gnv <= 0) {
            printf("O valor deve ser maior do que zero. Tente Novamente!");
            printf("\nInforme o valor do GNV: R$");
            scanf("%f", &valor_gnv);
        }
    }
    
    /* ========= CÁLCULOS ========= */
    
    float consumo_gasolina, consumo_etanol, consumo_gnv;  // Consumo por km
    float custo_km_gasolina, custo_km_etanol, custo_km_gnv;  // Custo por km

    // Menu de seleção de carro com validação
    printf("\nEscolha o carro:\n");
    printf("1 - Toyota Corolla\n");
    printf("2 - Chevrolet Opala\n");
    printf("Digite sua opcao [1 ou 2]: ");
    scanf("%d", &carro);
    while(carro != 1 && carro != 2) {
        printf("Opcao invalida. Digite 1 ou 2: ");
        scanf("%d", &carro);
    }

    // Define o consumo de combustível baseado no carro escolhido
    if (carro == 1) {  // Toyota Corolla
        consumo_gasolina = 11.9;   // km/l
        consumo_etanol = 8.0;      // km/l
    } else if (carro == 2) {  // Chevrolet Opala
        consumo_gasolina = 7.9;    // km/l
        consumo_etanol = 6.61;     // km/l
    }

    // Calcula custo por km para cada combustível
    custo_km_gasolina = razao(valor_gasolina, consumo_gasolina);
    custo_km_etanol = razao(valor_etanol, consumo_etanol);

    /* ========= RESULTADOS ========= */
    
    printf("\nCusto por quilometro:\n");
    printf("Gasolina: R$ %.3f/km\n", custo_km_gasolina);
    printf("Etanol: R$ %.3f/km\n", custo_km_etanol);
    
    // Se usuário optou por GNV
    if (resp == 1) {
        consumo_gnv = 12.0;  // km/m³ (consumo padrão para GNV)
        custo_km_gnv = razao(valor_gnv, consumo_gnv);
        printf("GNV: R$ %.3f/km\n", custo_km_gnv);

        // Lógica de recomendação considerando GNV
        if (custo_km_gnv < custo_km_gasolina && custo_km_gnv < custo_km_etanol) {
            printf("Recomendacao: Abastecer com GNV\n");
        } else if (custo_km_etanol < custo_km_gasolina) {
            printf("Recomendacao: Abastecer com ETANOL\n");
        } else {
            printf("Recomendacao: Abastecer com GASOLINA\n");
        }
    } else {
        // Lógica de recomendação sem GNV
        if (custo_km_etanol < custo_km_gasolina) {
            printf("Recomendacao: Abastecer com ETANOL\n");
        } else {
            printf("Recomendacao: Abastecer com GASOLINA\n");
        }
    }
    
    return 0;
}