#include <stdio.h>
#include <stdlib.h>

int myPrintf(int nofPrints){
    int i = 0;
    for(i = 0; i < nofPrints; i++)
        printf("Hellou World!!!\n");
    return i;
}

int main(int argc, char *argv[]){
    if (argc <= 1){
        printf("Sem argumentos...\n");
        return -1;
    }

    int resp = myPrintf(atoi(argv[1]));
    if (resp == atoi(argv[1])){
        printf("myPrintf funcionou bem!!!\n");
        return 0;
    }

    else 
        return -1;
}