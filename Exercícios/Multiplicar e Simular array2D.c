#include <stdio.h>

void encherArray(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        vet[i] = i;
    }
}

void imprimeArray(int linha, int coluna, int vet[]){
    int cont = 0;
    for(int i = 0; i < linha; i++){
        for(int j = cont; j < cont + coluna; j++){
            printf("%2d ", vet[j]);
        }
        printf("\n");
        cont += coluna;
    }
}

int main(){
    int linha1 = 3;
    int coluna1 = 2;
    int tam = linha1 * coluna1;
    int vetor1[tam];

    int cont = 0;

    int linha2 = 2;
    int coluna2 = 3;
    int tam2 = linha2 * coluna2;
    int vetor2[tam2];
    int vetor3[tam];

    //matriz 1
    encherArray(vetor1, tam);
    printf("Matriz 1:\n");
    imprimeArray(linha1, coluna1, vetor1);

    //matriz 2
    encherArray(vetor2, tam2);

    cont = 0;
    printf("Matriz 2:\n");
    imprimeArray(linha2, coluna2, vetor2);

    //Inicializando o vetor
    for(int i = 0; i < tam; i++){
        vetor3[i] = 0;
    }

    //Produto dos vetores
    for(int i = 0; i < linha1; i++){
        for(int j = 0; j < coluna2; j++){
            int soma = 0;
            for(int k = 0; k < coluna1; k++){
                soma += vetor1[i * linha1 + k] * vetor2[k * coluna2 + j];
            }
            vetor3[j * coluna2 + j] = soma;
        }
    }
    printf("\n");

    printf("Matriz 3:\n");
    imprimeArray(linha1, coluna2, vetor3);

    return 0;
}