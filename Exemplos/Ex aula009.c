#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int diaSemana = 0;
    if(argc == 2){
        diaSemana = atoi(argv[1]);
    }

    else if(argc > 2){
        printf("Muitos argumentos.\n");
        return 1;
    }

    else{
        printf("Entre com o dia da semana (número).\n");
        return 1;
    }

    switch(diaSemana){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3: 
            printf("Terça-Feira\n");
            break;
        case 4:
            printf("Quarta-Feira\n");
            break;
        case 5: 
            printf("Quinta-Feira\n");
            break;
        case 6: 
            printf("Sexta\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia inválido...\n");
            return 1;
    }

    return 0;
}