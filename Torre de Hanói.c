#include <stdio.h>
#include <math.h> // Para usar a função pow()

int main() {
    int blocos = 0;
    
    while (blocos != 5) {
        printf("Escolha uma das opções:\n");
        printf("[2] 2 BLOCOS\n");
        printf("[3] 3 BLOCOS\n");
        printf("[4] 4 BLOCOS\n");
        printf("[5] ENCERRAR PROGRAMA\n");
        
        printf("Informe o número de blocos: ");
        scanf("%d", &blocos);
        
        int comando = (int)pow(2, blocos) - 1;  // Calcula 2^blocos - 1
        int b1 = 3, b2 = 2, b3 = 3, b4 = 2;
        
        if (blocos >= 2 && blocos < 5) {
            for (int c = 0; c < comando; c++) {
                if (c % 2 == 0) {
                    printf("Bloco 1 -> Torre %d\n", b1);
                    b1--;
                    if (b1 == 0) b1 = 3;
                }
                else if ((c - 1) % 4 == 0) {
                    printf("Bloco 2 -> Torre %d\n", b2);
                    b2++;
                    if (b2 == 4) b2 = 1;
                }
                else if ((c - 3) % 8 == 0) {
                    printf("Bloco 3 -> Torre %d\n", b3);
                    b3--;
                }
                else if (c == 7) {
                    printf("Bloco 4 -> Torre %d\n", b4);
                }
            }
        }
        else if (blocos == 5) {
            printf("Finalizando...\n");
        }
        else {
            printf("Opção não encontrada. Tente novamente\n");
        }
    }
    
    printf("Fim do programa\n");
    return 0;
}