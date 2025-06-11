#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void imprime(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%d] ", vet[i]);
    }
}

int main(){
    int x = 100000;
    int vetor[x];
    int aux, soma = 0;
    clock_t inicio = clock();

    //Gera o vetor com numeros aleatorios
    srand(time(NULL));
    for(int i = 0; i < x; i++){
        vetor[i] = rand() % 100;
    }

    //Soma o vetor
    for(int i = 0; i < x; i++){
        soma += vetor[i];
    }

    printf("O vetor FORA de ordem:\n");
    imprime(vetor, x);

    //Ordenar os valores de maior para menor
    for(int i = 0; i < x; i++){
        for(int j = i + 1; j < x; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    //Ordenar os calores de menor para maior
    printf("\n");
    printf("O vetor na ordem DECRESCENTE:\n");
    imprime(vetor, x);

     for(int i = 0; i < x; i++){
        for(int j = i + 1; j < x; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\n");
    printf("O vetor na ordem CRESCENTE:\n");
    imprime(vetor, x);
    printf("\nA soma dos valores do vetor: %d\n", soma);
    printf("A media dos valores do vetor: %2.f\n", (float)soma/x);
    printf("O tempo de execucao do programa: %f\n", tempo);

    return 0;
}