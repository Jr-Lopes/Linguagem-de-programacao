#include <stdio.h>

int main(){
    printf("Numero de bytes de int: %li\n",sizeof(int));
    printf("Número de bystes de short: %li\n",sizeof(short));
    printf("Número de bytes de long: %li\n",sizeof(long));
    printf("Número de bytes de signed: %li\n",sizeof(signed));
    printf("Número de bytes de unsigned: %li\n",sizeof(unsigned));
    return 0;
}
