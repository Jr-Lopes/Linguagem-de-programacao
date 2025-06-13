#include <stdio.h>
#include <stdbool.h>  // Para usar o tipo 'bool' (não utilizado diretamente aqui)
#include <stdlib.h>   // Para rand() e srand()
#include <unistd.h>   // Para sleep() (não utilizado no código)
#include <time.h>     // Para time()

// Função auxiliar para imprimir arrays
void imprime(int nums[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("[%d] ", nums[i]);  // Imprime cada elemento entre colchetes
    }
}

int main() {
    // Array para armazenar os números escolhidos pelo usuário
    int numerosEscolhidos[6];
    int i, j, num;

    // ========== ENTRADA DE DADOS ==========
    // Solicita 6 números válidos ao usuário
    for (i = 0; i < 6; i++) {
        printf("Informe um numero (de 1 a 60): ");
        scanf("%d", &num);
        
        // Validação do intervalo (1-60)
        while (num < 1 || num > 60) {
            printf("Numero invalido!. Informe um numero entre 1 e 60: ");
            scanf("%d", &num);
        }

        // Verificação de números repetidos
        for (j = 0; j < i; j++) {
            if(numerosEscolhidos[j] == num) {
                printf("\nNumero repetido! Tente novamente");
                i--;  // Decrementa o contador para repetir esta posição
                break;
            }
        }
        numerosEscolhidos[i] = num;  // Armazena o número válido
    }

    // Exibe os números escolhidos
    printf("Os numeros escolhidos foram: ");
    imprime(numerosEscolhidos, 6);
    printf("\n");

    // ========== SIMULAÇÃO DE SORTEIO ==========
    int tentativas = 0, cont = 0;
    int num_sorteados[6];
    srand(time(NULL));  // Inicializa o gerador de números aleatórios

    while (true) {
        tentativas++;  // Contador de tentativas
        cont = 0;      // Zera o contador de acertos
        
        // Feedback a cada 1 milhão de tentativas
        if (tentativas % 1000000 == 0) {
            printf(" %d\n", tentativas);
        }

        // Gera 6 números aleatórios únicos (1-60)
        for (int i = 0; i < 6; ) {
            num_sorteados[i] = 1 + rand() % 60;  // Número entre 1-60

            // Verifica se o número já foi sorteado nesta rodada
            int igual = 0;
            for(j = 0; j < i; j++) {
                if(num_sorteados[j] == num_sorteados[i]) {
                    igual = 1;
                    break;
                }
            }

            if(igual == 0) {  // Se for único, avança para o próximo
                i++;
            }
        }
        
        // Compara os números sorteados com os escolhidos pelo usuário
        for(i = 0; i < 6; i++) {
            for(j = 0; j < 6; j++) {
                if (numerosEscolhidos[i] == num_sorteados[j]) {
                    cont++;  // Incrementa para cada número acertado
                    break;
                }
            }
        }
        
        // Se acertar todos os 6 números
        if (cont == 6) {
            printf("\nO numero sorteado foi: ");
            imprime(num_sorteados, 6);
            printf("\nNumero de tentativas: %d", tentativas);
            break;  // Encerra o loop
        }     
    }
    return 0;
}