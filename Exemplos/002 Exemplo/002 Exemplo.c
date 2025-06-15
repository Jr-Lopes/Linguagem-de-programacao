#include <stdio.h>

/* Exemplo básico de declaração e inicialização de variável */
int exemplo_declaracao_inicializacao() {
    int idade;                  // Declaração
    idade = 25;                 // Inicialização
    printf("Exemplo 1 (Declaração): %i anos\n", idade);
    return 0;
}

/* Declaração com inicialização combinada */
int exemplo_declaracao_combinada() {
    int quantidade_produtos = 0; // Declaração + inicialização
    quantidade_produtos = 100;   // Atribuição posterior
    printf("Exemplo 2 (Inicialização combinada): %i unidades\n", quantidade_produtos);
    return 0;
}

/* Operação aritmética direta na atribuição */
int exemplo_operacao_direta() {
    int total_clientes = 100 + 200;  // Soma direta
    printf("Exemplo 3 (Operação direta): %i clientes\n", total_clientes);
    return 0;
}

/* Operação usando o valor anterior da variável */
int exemplo_operacao_com_valor_anterior() {
    int saldo_atual = 100;
    saldo_atual = saldo_atual + 200;  // Usa o valor atual
    printf("Exemplo 4 (Operação com valor anterior): R$%i\n", saldo_atual);
    return 0;
}

/* Operador composto de adição (+=) */
int exemplo_operador_composto() {
    int pontos_acumulados = 100;
    pontos_acumulados += 200;       // Equivalente a pontos_acumulados = pontos_acumulados + 200
    printf("Exemplo 5 (Operador composto): %i pontos\n", pontos_acumulados);
    return 0;
}

/* Operador de incremento pós-fixado */
int exemplo_incremento_posfixado() {
    int contador_visitas = 100;
    contador_visitas++;           // Incrementa após usar o valor
    printf("Exemplo 6 (Incremento pós-fixado): %i visitas\n", contador_visitas);
    return 0;
}

/* Incremento dentro do printf (pós-incremento) */
int exemplo_incremento_em_printf() {
    int numero_pedidos = 100;
    printf("Exemplo 7 (Incremento em printf): %i pedidos\n", numero_pedidos++);  // Mostra 100, depois vira 101
    printf("Exemplo 7b (Valor após incremento): %i pedidos\n", numero_pedidos);   // Mostra 101
    return 0;
}

/* Múltiplos incrementos */
int exemplo_multiplos_incrementos() {
    int total_vendas = 100;
    printf("Exemplo 8 (Primeiro incremento): %i vendas\n", total_vendas++);  // Mostra 100, vira 101
    printf("Exemplo 8b (Segundo incremento): %i vendas\n", total_vendas++); // Mostra 101, vira 102
    return 0;
}

/* Pré-incremento */
int exemplo_pre_incremento() {
    int contador_mensagens = 100;
    printf("Exemplo 9 (Pré-incremento): %i mensagens\n", ++contador_mensagens);  // Incrementa para 101, depois mostra
    return 0;
}

/* Operador sizeof para ver tamanho da variável */
int exemplo_tamanho_variavel() {
    int tamanho_arquivo = 100;
    printf("Exemplo 10 (Tamanho da variável): %li bytes\n", sizeof(tamanho_arquivo));
    return 0;
}

/* Operação com duas variáveis */
int exemplo_operacao_com_duas_variaveis() {
    int clientes_ativos = 100, clientes_inativos = 200;
    clientes_ativos = clientes_ativos + clientes_inativos;
    printf("Exemplo 11 (Soma de clientes): %i clientes totais\n", clientes_ativos);
    return 0;
}

/* Uso de variável de resposta */
int exemplo_variavel_resultado() {
    int horas_trabalhadas = 100, valor_hora = 200, salario_total = 0;
    salario_total = horas_trabalhadas * valor_hora;
    printf("Exemplo 12 (Cálculo de salário): R$%i\n", salario_total);
    return 0;
}

/* Exemplo com nomes menos descritivos (para comparação) */
int exemplo_variaveis_pouco_descritivas() {
    int x = 1000, y = 1, z = 100;
    x = z + y;  // Código menos legível
    printf("Exemplo 13 (Não recomendado): %i\n", x);
    return 0;
}

int main() {
    exemplo_declaracao_inicializacao();
    exemplo_declaracao_combinada();
    exemplo_operacao_direta();
    exemplo_operacao_com_valor_anterior();
    exemplo_operador_composto();
    exemplo_incremento_posfixado();
    exemplo_incremento_em_printf();
    exemplo_multiplos_incrementos();
    exemplo_pre_incremento();
    exemplo_tamanho_variavel();
    exemplo_operacao_com_duas_variaveis();
    exemplo_variavel_resultado();
    exemplo_variaveis_pouco_descritivas();
    
    return 0;
}