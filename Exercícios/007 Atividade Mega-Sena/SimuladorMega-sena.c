#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void imprime(int nums[], int tamanho){
    for(int i = 0; i < tamanho; i++){
                printf("[%d] ", nums[i]);
            }
}

int main(){
    //Lista para armazenar os números do usuário
    int numerosEscolhidos[6];
    int i, j, num;

    //Pede os 6 números oara o user
    for (i = 0; i < 6; i++){
        printf("Informe um numero (de 1 a 60): ");
        scanf("%d", &num);
        
        //Veririca se o número é válido
        while (num < 1 || num > 60){
            printf("Numero invalido!. Informe um numero entre 1 e 60: ");
            scanf("%d", &num);
        }

        //Verifica se há números repetidos
        for (j = 0; j < i; j++){
            if(numerosEscolhidos[j] == num){
                printf("\nNumero repetido! Tente novamente");
                i--; //Volta uma posição para digitar novamente
                break;
            }
        }
        numerosEscolhidos[i] = num;
    }

    printf("Os numeros escolhidos foram: ");
    imprime(numerosEscolhidos, 6);
    printf("\n");

    //Loop principal
    
    int tentativas = 0, cont = 0;
    int num_sorteados[6];
    srand(time(NULL)); // Gera 6 números aleatórios não repetidos para o sorteio
    while (true){
        tentativas +=1;
        cont = 0;
        if (tentativas % 1000000 == 0) {
           printf(" %d\n", tentativas);
        }

        // Gera números aleátorios
        for (int i = 0; i < 6; ){
            num_sorteados[i] = 1 + rand() % 60;

            int igual = 0;
            for(j = 0; j < i; j++){
                if(num_sorteados[j] == num_sorteados[i]){
                    igual = 1;
                    break;
                }
            }

            if(igual == 0){
                i++;
            }
        }
        
        
        for(i = 0; i < 6; i++){
            for(j = 0; j < 6; j++){
                if (numerosEscolhidos[i] == num_sorteados[j]){ // compara as listas 
                cont ++;
                break;
                }
            }
        }
        
        if (cont == 6){ // Quando a lista possui 6 números o loop para 
        printf("\nO numero sorteado foi: ");
        imprime(num_sorteados, 6);
        printf("\n Numero de tentivas %d", tentativas);
        break;
        }     
    }
    return 0;

    }
