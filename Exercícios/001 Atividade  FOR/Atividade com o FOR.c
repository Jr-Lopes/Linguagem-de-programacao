#include <stdio.h> 

int main() {  // Função principal onde a execução do programa começa
    
    /* Contagem sequencial entre 0 e 10000: */
    int i, j, k, l, m;  // Declaração de variáveis inteiras para os loops
    
    // Loop 1: Contagem de 0 até 10000 (inclusive)
    for (i = 0; i <= 10000; i++) {  // i começa em 0, incrementa de 1 em 1 enquanto ≤10000
        printf("%d\n", i);  // Imprime o valor atual de i seguido de quebra de linha
    }
    
    /* Loop 2: Contagem sequencial entre -10000 e +10000 (inclusive) */
    for (j = -10000; j <= 10000; j++) {  // j começa em -10000, incrementa de 1 em 1
        printf("%d\n", j);  // Imprime o valor atual de j com quebra de linha
    }
    
    /* Loop 3: Contagem dos números pares entre 0 e 10000 (inclusive) */
    for (k = 0; k <= 10000; k += 2) {  // k começa em 0, incrementa de 2 em 2 (só pares)
        printf("%d\n", k);  // Imprime o número par atual
    }
    
    /* Loop 4: Contagem dos múltiplos de 3 entre 0 e 10000 (inclusive) 
       (O comentário original estava incorreto - dizia "ímpares" mas conta de 3 em 3) */
    for (l = 0; l <= 10000; l += 3) {  // l começa em 0, incrementa de 3 em 3
        printf("%d\n", l);  // Imprime múltiplos de 3 (0, 3, 6, 9...)
    }
    
    /* Loop 5: Contagem dos múltiplos de 3 entre -100000 e +100000 (inclusive)
       (Aqui há um erro no valor inicial - deveria ser -10000 conforme o comentário,
        mas está -100000) */
    for (m = -100000; m <= 100000; m += 3) {  // m varia de -100000 a +100000, passo 3
        printf("%d", m);  // Imprime sem quebra de linha (provavelmente erro de digitação)
    }
    
    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}