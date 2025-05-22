#include <stdio.h>

// Funções para calculo de impostos
float calculoPIS(float faturamento){
    return faturamento * 0.0065;
}

float calculoCONFINS(float faturamento){
    return faturamento * 0.03;
}

float calculoICMS(float faturamento){
    return faturamento * 0.205;
}

float calculoISS(float faturamento){
    return faturamento * 0.02;
}

float calculoINSS(salario_tot){
    return salario_tot * 0.2;
}

// Funções para calculo de reserva trabalhista
float calculoFGTS(float salario_tot){
    return salario_tot * 0.08;
}

float calculoDECIMO(float salario_tot){
    return salario_tot / 12;
}

float calculoFERIAS(float salario_tot){
    return (salario_tot / 12) * 1.3333;
}

float calculoMULTA(float fgts, float num_func){
    return fgts * 0.4 * num_func * 0.1;
}

int main(){
    //Informações da empresa
    float salario_tot = 0, num_func = 0, faturamento = 0, fgts = 0;
    
    printf("Sistema de Reservas Mensais Trabalhistas e Impostos\n");
    printf("Informe o salário total da empresa: ");
    scanf("%f", &salario_tot);
    printf("Informe o número total de funcionários: ");
    scanf("%f", &num_func);
    printf("Informe o faturamento mensal da empresa: ");
    scanf("%f", &faturamento);
    
    printf("--- IMPOSTOS COMERCIAIS ---\n");
    printf("PIS: %.2f\n", calculoPIS(faturamento));
    printf("CONFINS: %.2f\n", calculoCONFINS(faturamento));
    printf("ISS: %.2f\n", calculoISS(faturamento));
    printf("INSS: %.2f\n", calculoINSS(salario_tot));
    
    printf("--- RESERVAS TRABALHISTAS ---\n");
    printf("FGTS: %.2f\n", calculoFGTS(salario_tot));
    printf("DECIMO TERCEIRO: %.2f\n", calculoDECIMO(salario_tot));
    printf("FERIAS: %.2f\n", calculoFERIAS(salario_tot));
    printf("MULTA RECISORIA: %.2f\n", calculoMULTA(fgts, num_func));
    
    return 0;
}