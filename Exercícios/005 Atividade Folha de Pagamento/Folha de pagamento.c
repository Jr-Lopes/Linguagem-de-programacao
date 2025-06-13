#include <stdio.h>

/* ========== FUNÇÕES PARA CÁLCULO DE TRIBUTOS ========== */

// Calcula o PIS (Programa de Integração Social) - 0,65% sobre o faturamento
float calculoPIS(float faturamento){
    return faturamento * 0.0065;
}

// Calcula a COFINS (Contribuição para Financiamento da Seguridade Social) - 3% sobre o faturamento
float calculoCONFINS(float faturamento){
    return faturamento * 0.03;
}

// Calcula o ICMS (Imposto sobre Circulação de Mercadorias e Serviços) - 20,5% sobre o faturamento
float calculoICMS(float faturamento){
    return faturamento * 0.205;
}

// Calcula o ISS (Imposto sobre Serviços) - 2% sobre o faturamento
float calculoISS(float faturamento){
    return faturamento * 0.02;
}

// Calcula a contribuição para o INSS (Instituto Nacional do Seguro Social) - 20% sobre a folha salarial
float calculoINSS(float salario_tot){
    return salario_tot * 0.2;
}

/* ========== FUNÇÕES PARA CÁLCULO DE ENCARGOS TRABALHISTAS ========== */

// Calcula o FGTS (Fundo de Garantia por Tempo de Serviço) - 8% sobre a folha salarial
float calculoFGTS(float salario_tot){
    return salario_tot * 0.08;
}

// Calcula a reserva mensal para o 13º salário (1/12 da folha salarial)
float calculoDECIMO(float salario_tot){
    return salario_tot / 12;
}

// Calcula a reserva mensal para férias (1/12 do salário + 1/3 constitucional)
float calculoFERIAS(float salario_tot){
    return (salario_tot / 12) * 1.3333; // 1.3333 representa o acréscimo de 1/3
}

// Calcula a reserva para multa rescisória (40% do FGTS vezes 10% do número de funcionários)
float calculoMULTA(float fgts, float num_func){
    return fgts * 0.4 * num_func * 0.1;
}

/* ========== PROGRAMA PRINCIPAL ========== */
int main(){
    // Variáveis para armazenar os dados da empresa
    float salario_tot = 0;    // Total da folha salarial mensal
    float num_func = 0;       // Número total de funcionários
    float faturamento = 0;    // Faturamento mensal da empresa
    float fgts = 0;           // Valor do FGTS calculado
    
    // Interface com o usuário
    printf("Sistema de Reservas Mensais Trabalhistas e Impostos\n");
    
    // Coleta de dados
    printf("Informe o salário total da empresa: ");
    scanf("%f", &salario_tot);
    printf("Informe o número total de funcionários: ");
    scanf("%f", &num_func);
    printf("Informe o faturamento mensal da empresa: ");
    scanf("%f", &faturamento);
    
    // Cálculo e exibição dos impostos comerciais
    printf("\n--- IMPOSTOS COMERCIAIS ---\n");
    printf("PIS: R$ %.2f\n", calculoPIS(faturamento));
    printf("COFINS: R$ %.2f\n", calculoCONFINS(faturamento));
    printf("ISS: R$ %.2f\n", calculoISS(faturamento));
    printf("INSS: R$ %.2f\n", calculoINSS(salario_tot));
    
    // Cálculo e exibição dos encargos trabalhistas
    fgts = calculoFGTS(salario_tot); // Calcula FGTS primeiro pois é usado no cálculo da multa
    printf("\n--- RESERVAS TRABALHISTAS ---\n");
    printf("FGTS: R$ %.2f\n", fgts);
    printf("DÉCIMO TERCEIRO: R$ %.2f\n", calculoDECIMO(salario_tot));
    printf("FÉRIAS: R$ %.2f\n", calculoFERIAS(salario_tot));
    printf("MULTA RESCISÓRIA: R$ %.2f\n", calculoMULTA(fgts, num_func));
    
    return 0;
}