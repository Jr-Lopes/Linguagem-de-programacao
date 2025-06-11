#include <stdio.h>
/*
Fórmula para acessar a uma célula específica de uma matriz
indice = (linha * num_colunas) + coluna
*/

int main(){
   int num_linhas = 0;
   int num_colunas = 0;

   printf("Informe o numero de linhas: ");
   scanf("%i", &num_linhas);
   printf("Informe o numero de colunas: ");
   scanf("%i", &num_colunas);

   int linha = 0;
   int coluna = 0;
   printf("Acessando celulas da matriz:\n");
   printf("Informe a LINHA: ");
   scanf("%i", &linha);
   printf("Informe a COLUNA:");
   scanf("%i", &coluna);

   if(linha > num_linhas){
    printf("Linha incompativel");
    return 1;
    }

   if(coluna > num_colunas){
    printf("Coluna incompativel");
        return 1;
    } 

   int total = num_colunas * num_linhas;
   int vetor[total], cont = 0, soma = 0;
   
   for(int i = 0; i < total; i++){
       vetor[i] = i;
    }
    
   for(int i = 0; i < num_linhas; i++){ // Determina o numero de linhas
      for(int j = cont; j < cont + num_colunas; j++){ // Colunas
          printf("%2d ", vetor[j]);
      }
      cont += num_colunas;
      printf("\n");
    }
    
    int indice = (linha * num_colunas) + coluna; //acessando a celula da matriz 
    printf("Numero acessado -> %i\n", indice);

    for(int i = 0; i < total; i++){
        soma += vetor[i];
    }
   
    printf("Soma: %i", soma);
    
    return 0;
}