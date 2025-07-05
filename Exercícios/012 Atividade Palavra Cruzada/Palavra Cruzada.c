#include <stdio.h>
#include <stdlib.h>

//Variáveis globais
int aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0, aux7 = 0, aux8 = 0, aux9 = 0, aux10 = 0;
int aux11 = 0, aux12 = 0, aux13 = 0, aux14 = 0, aux15 = 0, aux16 = 0, aux17 = 0, aux18 = 0;
int aux19 = 0, aux20 = 0, aux21 = 0, aux22 = 0, aux23 = 0, aux24 = 0, aux25 = 0;

void imprime(char matriz[13][13]){
    system("cls");

    printf("==================== DICAS ====================\n");
    printf("HORIZONTAIS:\n");
    if(aux1 == 0)
        printf("01. Pessoas ignorantes, rudes. (6)\n");
    if(aux25 == 0)
        printf("25. Junto por aderencia. (6)\n");
    if(aux8 == 0)
        printf("08. Metal Nobre. (4)\n");
    if(aux9 == 0)
        printf("09. Plural de cabana fragil. (8)\n");
    if(aux10 == 0)
        printf("10. Arredio, timido. (7)\n");
    if(aux11 == 0)
        printf("11. Unir-se pelo amor. (5)\n");
    if(aux12 == 0)
        printf("13. Mercado dominado por pocuos vendedores. (plural) (11)\n");
    if(aux16 == 0)
        printf("16. Nao agitado (5)\n");
    if(aux18 == 0)
        printf("18. Rebanho do pastor. (7)\n");
    if(aux22 == 0)
        printf("22. Pronome interrogativo: pessoal (4)\n");
    if(aux23 == 0)
        printf("23. Mulher que nao esta sob efeito de bebidas alcoolicas\n");
    if(aux24 == 0)
        printf("24. Mulheres que nascem na Suecia. (6)\n");
    printf("\n");
    printf("VERTICAIS:\n");
    if(aux2 == 0)
        printf("02. Desfruta de alguma coisa ou servico. (7)\n");
    if(aux3 == 0)
        printf("03. 'Salas' em ingles\n");
    if(aux4 == 0)
        printf("04. Pele e um dos____do futebol brasileiro. (8)\n");
    if(aux5 == 0)
        printf("05. Personagem do Sitio do Pica-pau Amarelo. (4)\n");
    if(aux6 == 0)
        printf("06. Peixe pequeno de agua doce. (7)\n");
    if(aux7 == 0)
        printf("07. Pode ser remedio ou vicio. (5)\n");
    if(aux12 == 0)
        printf("12. Hinos de exaltacao. (plural) (8)\n");
    if(aux14 == 0)
        printf("14. Tornar irmao. (7)\n");
    if(aux15 == 0)
        printf("15. Raca de gato originaria da Tailandia. (7)\n");
    if(aux17 == 0)
        printf("17. Primeiro nome do neto de Tancredo Neves. (5)\n");
    if(aux19 == 0)
        printf("19. Usado para abanar. (5)\n");
    if(aux20 == 0)
        printf("20. Protege as maos (4)\n");
    printf("\n");
    printf("==== PALAVRA CRUZADA ====\n");

    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 13; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void paraMaiusculo(char *str) {
    for(int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int main(){
     char matriz[13][13];
     char palavra1[] = "XUCRAS";
     char palavra2[] = "USUARIO";
     char palavra3[] = "ROOMS";
     char palavra4[] = "SIMBOLOS";
     char palavra5[] = "CUCA";
     char palavra6[] = "LAMBARI";
     char palavra7[] = "DROGA";
     char palavra8[] = "OURO";
     char palavra9[] = "MUCAMBOS";
     char palavra10[] = "ARISCOS";
     char palavra11[] = "CASAR";
     char palavra12[] = "LOUVORES";
     char palavra13[] = "OLIGOPOLIOS";
     char palavra14[] = "IRMANAR";
     char palavra15[] = "SIAMESA";
     char palavra16[] = "CALMO";
     char palavra17[] = "AECIO";
     char palavra18[] = "OVELHAS";
     char palavra19[] = "LEQUE";
     char palavra20[] = "LUVA";
     char palavra21[] = "ACENTUAR";
     char palavra22[] = "QUEM";
     char palavra23[] = "SOBRIA";
     char palavra24[] = "SUECAS";
     char palavra25[] = "COLADO";

     char resposta[15];
     int acertos = 0, tam = 0;

    // Inicialização da matriz
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 13; j++){
            matriz[i][j] = '.';
        }
    }
    imprime(matriz);

    while(1){
        printf("Informe uma palavra: ");
        scanf("%s", resposta);

        paraMaiusculo(resposta);
        tam = strlen(resposta);

        if(strcmp(resposta, palavra1) == 0){
            for(int i = 0; i < tam; i++){
                 matriz[0][i] = palavra1[i];
            }
            aux1 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra2) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][1] = palavra2[i];
            }
            aux2 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra3) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][3] = palavra3[i];
            }
            aux3 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra4) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][5] = palavra4[i];
            }
            aux4 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra5) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][7] = palavra5[i];
            }
            aux5 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra6) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][9] = palavra6[i];
            }
            aux6 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra7) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][11] = palavra7[i];
            }
            aux7 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra8) == 0){
            for(int i = 0; i < tam; i++){
                matriz[2][i] = palavra8[i];
            }
            aux8 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra9) == 0){
            for(int i = 0; i < tam; i++){
                matriz[2][5 + i] = palavra9[i];
            }
            aux9 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra10) == 0){
            for(int i = 0; i < tam; i++){
                matriz[4][i] = palavra10[i];
            }
            aux10 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra11) == 0){
            for(int i = 0; i < tam; i++){
                matriz[4][8 + i] = palavra11[i];
            }
            aux11 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra12) == 0){
            for(int i = 0; i < tam; i++){
                matriz[5 + i][7] = palavra12[i];
            }
            aux12 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra13) == 0){
            for(int i = 0; i < tam; i++){
                matriz[6][1 + i] = palavra13[i];
            }
            aux13 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra14) == 0){
            for(int i = 0; i < tam; i++){
                matriz[6 + i][3] = palavra14[i];
            }
            aux14 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra15) == 0){
            for(int i = 0; i < tam; i++){
                matriz[6 + i][11] = palavra15[i];
            }
            aux15 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra16) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8][i] = palavra16[i];
            }
            aux16 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra17) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8 + i][1] = palavra17[i];
            }
            aux17 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra18) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8][6 + i] = palavra18[i];
            }
            aux18 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra19) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8 + i][9] = palavra19[i];
            }
            aux19 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra20) == 0){
            for(int i = 0; i < tam; i++){
                matriz[9 + i][5] = palavra20[i];
            }
            aux20 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra21) == 0){
            for(int i = 0; i < tam; i++){
                matriz[10][i] = palavra21[i];
            }
            aux21 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra22) == 0){
            for(int i = 0; i < tam; i++){
                matriz[10][9 + i] = palavra22[i];
            }
            aux22 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra23) == 0){
            for(int i = 0; i < tam; i++){
                matriz[12][i] = palavra23[i];
            }
            aux23 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra24) == 0){
            for(int i = 0; i < tam; i++){
                matriz[12][7 + i] = palavra24[i];
            }
            aux24 = 1;
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra25) == 0){
            for(int i = 0; i < tam; i++){
                matriz[0][7 + i] = palavra25[i];
            }
            aux25 = 1;
            imprime(matriz);
            acertos++;
        }

        else{
            printf("Palavra errada. Tente novamente!");
        }

        if(acertos == 24){
            printf("\nPARABENS! Voce completou o jogo!\n");
            break;
        }
 
    }

    return 0;
}

