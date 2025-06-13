#include <stdio.h>
int main(){
    int array = 0;
    int linha = 0;
    int coluna = 0;

    printf("Informe o numero de arrays: ");
    scanf("%i", &array);
    printf("Informe o numero de linhas: ");
    scanf("%i", &linha);
    printf("Informe o numero de colunas: ");
    scanf("%i", &coluna);
    
    int total = array * linha * coluna;
    int vetor[total], cont = 0;

    for(int i = 0; i < total; i++){
        vetor[i] = i;
    }

    for(int i = 0; i < array; i++){
        for(int j = 0; j < linha; j++){
            for(int k = cont; k < cont + coluna; k++){
                printf("%3d ", vetor[k]);
            }printf("\n");
        cont += coluna;
        }
        printf("\n");   
    }
    
    return 0;
}