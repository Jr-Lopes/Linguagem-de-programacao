#include <stdio.h>
#include <math.h> // Biblioteca para operações matemáticas (usamos pow())

int main() {
    int blocos = 0; // Variável que armazena a escolha do usuário
    
    // Loop principal que executa até o usuário escolher a opção 5 (Encerrar)
    while (blocos != 5) {
        // Menu de opções
        printf("Escolha uma das opções:\n");
        printf("[2] 2 BLOCOS\n");
        printf("[3] 3 BLOCOS\n");
        printf("[4] 4 BLOCOS\n");
        printf("[5] ENCERRAR PROGRAMA\n");
        
        // Recebe a entrada do usuário
        printf("Informe o número de blocos: ");
        scanf("%d", &blocos);
        
        // Calcula o número total de comandos necessários: 2^n - 1
        int comando = (int)pow(2, blocos) - 1;
        
        // Inicializa as torres para cada bloco
        int b1 = 3, b2 = 2, b3 = 3, b4 = 2; // Posições iniciais dos blocos
        
        // Verifica a escolha do usuário
        if (blocos >= 2 && blocos < 5) {
            // Gera a sequência de movimentos
            for (int c = 0; c < comando; c++) {
                // Movimento do Bloco 1 (ocorre a cada 2 passos)
                if (c % 2 == 0) {
                    printf("Bloco 1 -> Torre %d\n", b1);
                    b1--; // Move para a torre anterior
                    if (b1 == 0) b1 = 3; // Volta para a torre 3 se chegar a 0
                }
                // Movimento do Bloco 2 (ocorre a cada 4 passos, começando no passo 1)
                else if ((c - 1) % 4 == 0) {
                    printf("Bloco 2 -> Torre %d\n", b2);
                    b2++; // Move para a próxima torre
                    if (b2 == 4) b2 = 1; // Volta para a torre 1 se passar de 3
                }
                // Movimento do Bloco 3 (ocorre a cada 8 passos, começando no passo 3)
                else if ((c - 3) % 8 == 0) {
                    printf("Bloco 3 -> Torre %d\n", b3);
                    b3--; // Move para a torre anterior
                }
                // Movimento do Bloco 4 (ocorre apenas no passo 7)
                else if (c == 7) {
                    printf("Bloco 4 -> Torre %d\n", b4);
                }
            }
        }
        else if (blocos == 5) {
            printf("Finalizando...\n"); // Mensagem de encerramento
        }
        else {
            // Mensagem para opções inválidas
            printf("Opção não encontrada. Tente novamente\n");
        }
    }
    
    printf("Fim do programa\n");
    return 0; // Encerra o programa com sucesso
}