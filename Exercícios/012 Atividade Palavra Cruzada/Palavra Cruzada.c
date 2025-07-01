#include <stdio.h>
#include <stdlib.h>

void imprime(char matriz[13][13]){
    system("cls");

    printf("==================== DICAS ====================\n");
    printf("HORIZONTAIS:\n");
    printf("01. Pessoas ignorantes, rudes. (6)\n");
    printf("25. Junto por aderencia. (6)\n");
    printf("08. Metal Nobre. (4)\n");
    printf("09. Plural de cabana fragil. (8)\n");
    printf("10. Arredio, timido. (7)\n");
    printf("11. Unir-se pelo amor. (5)\n");
    printf("13. Mercado dominado por pocuos vendedores. (plural) (11)\n");
    printf("16. Nao agitado (5)\n");
    printf("18. Rebanho do pastor. (7)\n");
    printf("22. Pronome interrogativo: pessoa (4)\n");
    printf("23. Mulher que nao esta sob efeito de bebidas alcoolicas\n");
    printf("24. Mulheres que nascem na Suecia. (6)\n");
    printf("\n");
    printf("VERTICAIS:\n");
    printf("02. Desfruta de alguma coisa ou servico. (7)\n");
    printf("03. 'Salas' em ingles\n");
    printf("04. Pele e um dos____do futebol brasileiro. (8)\n");
    printf("05. Personagem do Sitio do Pica-pau Amarelo. (4)\n");
    printf("06. Peixe pequeno de agua doce. (7)\n");
    printf("07. Pode ser remedio ou vicio. (5)\n");
    printf("12. Hinos de exaltacao. (8)\n");
    printf("14. Tornar irmao. (7)\n");
    printf("15. Raca de gato originaria da Tailandia. (7)\n");
    printf("17. Primeiro nome do neto de Tancredo Neves. (5)\n");
    printf("19. Usado para abanar. (5)\n");
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
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra2) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][1] = palavra2[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra3) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][3] = palavra3[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra4) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][5] = palavra4[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra5) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][7] = palavra5[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra6) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][9] = palavra6[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra7) == 0){
            for(int i = 0; i < tam; i++){
                matriz[i][11] = palavra7[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra8) == 0){
            for(int i = 0; i < tam; i++){
                matriz[2][i] = palavra8[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra9) == 0){
            for(int i = 0; i < tam; i++){
                matriz[2][5 + i] = palavra9[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra10) == 0){
            for(int i = 0; i < tam; i++){
                matriz[4][i] = palavra10[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra11) == 0){
            for(int i = 0; i < tam; i++){
                matriz[4][8 + i] = palavra11[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra12) == 0){
            for(int i = 0; i < tam; i++){
                matriz[5 + i][7] = palavra12[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra13) == 0){
            for(int i = 0; i < tam; i++){
                matriz[6][1 + i] = palavra13[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra14) == 0){
            for(int i = 0; i < tam; i++){
                matriz[6 + i][3] = palavra14[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra15) == 0){
            for(int i = 0; i < tam; i++){
                matriz[6 + i][11] = palavra15[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra16) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8][i] = palavra16[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra17) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8 + i][1] = palavra17[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra18) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8][6 + i] = palavra18[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra19) == 0){
            for(int i = 0; i < tam; i++){
                matriz[8 + i][9] = palavra19[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra20) == 0){
            for(int i = 0; i < tam; i++){
                matriz[9 + i][5] = palavra20[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra21) == 0){
            for(int i = 0; i < tam; i++){
                matriz[10][i] = palavra21[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra22) == 0){
            for(int i = 0; i < tam; i++){
                matriz[10][9 + i] = palavra22[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra23) == 0){
            for(int i = 0; i < tam; i++){
                matriz[12][i] = palavra23[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra24) == 0){
            for(int i = 0; i < tam; i++){
                matriz[12][7 + i] = palavra24[i];
            }
            imprime(matriz);
            acertos++;
        }

        else if(strcmp(resposta, palavra25) == 0){
            for(int i = 0; i < tam; i++){
                matriz[0][7 + i] = palavra25[i];
            }
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

