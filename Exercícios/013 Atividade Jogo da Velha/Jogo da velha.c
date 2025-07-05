#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializa(char matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = ' ';
        }
    }  
}

void imprime(char vet[3][3]){
    system("cls");
    printf("       == JOGO-DA-VELHA ==");
    printf("\n\t   ");
    for(int i = 0; i < 3; i++)
        printf(" %d  ", i);
    printf("\n\t  -------------\n");
    for(int i = 0; i < 3; i ++){
        printf("\t%d |", i);
        for(int j = 0; j < 3; j++){
            printf(" %c ", vet[i][j]);
            printf("|");
        }
        printf("\n\t  -------------\n");
    }
}

//Variáveis globais
char jogador1[10], jogador2[10];
int contJogador1 = 0, contJogador2 = 0;

//Função que compara as celulas 
int verificaVencedor(char vet[3][3]){
    for(int i = 0; i < 3; i++){
        //compara as linhas verticais
        if(vet[i][0] == vet[i][1] && vet[i][0] == vet[i][2]){
            if(vet[i][0] == 'X'){
                printf("Fim de jogo. %s VENCEU a partida!", jogador1);
                contJogador1++;
                return 1;
            }
            else if(vet[i][0] == 'O'){
                printf("Fim de jogo. %s VENCEU a partida!", jogador2);
                contJogador2++;
                return 1;
            }
        }

        //Compara as linhas horizontais
        if(vet[0][i] == vet[1][i] && vet[0][i] == vet[2][i]){
            if(vet[0][i] == 'X'){
                printf("Fim de jogo. %s VENCEU a partida!", jogador1);
                contJogador1++;
                return 1;
            }
            else if(vet[0][i] == 'O'){
                printf("Fim de jogo. %s VENCEU a partida!", jogador2);
                contJogador2++;
                return 1;
            }
        }
    }

    //Compara a diagonal principal
    if(vet[0][0] == vet[1][1] && vet[1][1] == vet[2][2]){
        if(vet[0][0] == 'X'){
            printf("Fim de jogo. %s VENCEU a partida!", jogador1);
            contJogador1++;
            return 1;
        }
        else if(vet[0][0] == 'O'){
            printf("Fim de jogo. %s VENCEU a partida!", jogador2);
            contJogador2++;
            return 1;
        }
    }

    //Compara a diagonal secundaria
    if(vet[0][2] == vet[1][1] && vet[0][2] == vet[2][0]){
        if(vet[0][2] == 'X'){
            printf("Fim de jogo. %s VENCEU a partida!", jogador1);
            contJogador1++;
            return 1;
        }
        else if(vet[0][2] == 'O'){
            printf("Fim de jogo. %s VENCEU a partida!", jogador2);
            contJogador2++;
            return 1;
        }
    }

    return 0;
}

int main(){
    char matriz[3][3];
    int linha = 0, coluna = 0, jogadas = 0;
    int resposta;

    //Inicializando a matriz
    inicializa(matriz);  
    imprime(matriz);  
    
    printf("Informe o nome do jogador1: ");
    scanf("%9s", jogador1);
    printf("Informe o nome do jogador2: ");
    scanf("%9s", jogador2);

    while(1){
        while(1){
            printf("\n");
            printf("%s: 'X'\n", jogador1);
            printf("%s: 'O'\n", jogador2);
            printf("Informe uma coordenada: ");
            scanf("%d%d", &linha, &coluna);

            if(jogadas % 2 == 0){
                matriz[linha][coluna] = 'X';
                imprime(matriz);
                if(verificaVencedor(matriz))
                    break;
                jogadas++;
            }

            else if(jogadas % 2 == 1){
                matriz[linha][coluna] = 'O';
                imprime(matriz);
                if(verificaVencedor(matriz))
                    break;
                jogadas++;
            }

            if(jogadas == 9){
                printf("Fim de jogo. EMPATE!");
                break;
            }
        }

        jogadas = 0;
        do{
            printf("\nPressione '0' para CONTINUAR ou '1' para ENCERRAR: ");
            scanf("%i", &resposta);

            if(resposta != 0 && resposta != 1){
                printf("Resposta invalida. Tente novamente.\n");
            }
        }while(resposta != 0 && resposta != 1);

        if(resposta && 1){
            printf("Jogo ENCERRADO");
            if(contJogador1 > contJogador2)
                printf("%s VENCEU o jogo.\nPlacar final: %d x %d", jogador1, contJogador1, contJogador2);
            else if(contJogador2 > contJogador1)
                printf("%s VENCEU o jogo.\nPlacar final: %d x %d", jogador2, contJogador2, contJogador1);
            break;
        }
        else{
            system("cls");
            inicializa(matriz);
            imprime(matriz); 
        }
    }

    return 0;
}