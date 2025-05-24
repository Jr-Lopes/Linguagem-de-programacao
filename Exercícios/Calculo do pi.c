#include <stdio.h>
#include <math.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num_pontos = 0, cont_pts = 0;
    double lado = 0, coordenada = 0, valor_pi = 0; 

     // Pontos a serem gerados 
     printf("Informe o numero de pontos: ");
     scanf("%i", &num_pontos);

     //Coordenadas do quadrado
     printf("Informe o lado do quadrado: ");
     scanf("%lf", &lado);

     coordenada = lado / 2;

     // Incializa o gerador de num aleatórios
     srand(time(NULL));

     // Gera pontos aleatórios dentro de um intervalo
    double x, y;
     for (int i = 0; i < num_pontos; i++){
        x = ((float)rand() / RAND_MAX) * lado - coordenada;
        y = ((float)rand() / RAND_MAX) * lado - coordenada;

        // Verifica se está dentro do circulo
        if (pow(x, 2) + pow(y, 2) <= pow(coordenada, 2)){
            cont_pts += 1;
        }
    }

    //Calculo estimado de PI
    valor_pi = 4 * ((double)cont_pts / num_pontos);

    printf("Pontos gerados: %d\n", num_pontos);
    printf("Pontos dentro do circulo: %d\n", cont_pts);
    printf("Estimativa de PI: %f\n", valor_pi);

    return 0;
}