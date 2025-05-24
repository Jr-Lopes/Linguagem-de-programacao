#include <stdio.h>

int main(){
    /* Contagem sequencial entre 0 e 10000: */
    int i, j, k, l, m;
    
    for (i = 0; i <= 10000; i++){
        printf("%d\n", i);
    }
    
    /*  sequencial entre -10000 e +10000: */
    for (j = -10000; j <= 10000; j++){
        printf("%d\n", j);
    }
    
    /* Contagem sequencial entre 0 e 10000 dos números pares: */
    for (k = 0; k <= 10000; k+=2){
        printf("%d\n", k);
    }
    
    /* Contagem sequencial entre 0 e 10000 dos números ímpares: */
    for (l = 0; l <= 10000; l+=3){
        printf("%d\n", l);
    }
    
    /* Contagem sequencial entre -10000 e +10000: */
    for (m = -100000; m <= 100000; m+=3){
        printf("%d", m);
    }
    return 0;
}
