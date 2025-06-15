#include <stdio.h>
#include <stdlib.h>

/**
 * Função que imprime uma mensagem múltiplas vezes
 * @param quantidade_impressoes Número de vezes para imprimir a mensagem
 * @return Número de impressões realizadas
 */
int imprimir_mensagem(int quantidade_impressoes) {
    int contador = 0;
    for(contador = 0; contador < quantidade_impressoes; contador++) {
        printf("Hello World!!!\n");  // Corrigido "Hellou" para "Hello"
    }
    return contador;
}

int main(int argc, char *argv[]) {
    // Verifica se foi fornecido um argumento
    if (argc <= 1) {
        printf("Erro: Nenhum argumento fornecido.\n");
        printf("Uso: %s <numero_de_repeticoes>\n", argv[0]);
        return -1;
    }

    // Converte o argumento para inteiro e chama a função de impressão
    int repeticoes_solicitadas = atoi(argv[1]);
    int repeticoes_realizadas = imprimir_mensagem(repeticoes_solicitadas);

    // Verifica se a função executou corretamente
    if (repeticoes_realizadas == repeticoes_solicitadas) {
        printf("A função imprimir_mensagem executou com sucesso!\n");
        return 0;
    } else {
        printf("Erro: A função não executou todas as impressões solicitadas.\n");
        return -1;
    }
}