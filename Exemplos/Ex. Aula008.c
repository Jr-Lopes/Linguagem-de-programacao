#include <stdio.h>

int main(){
    char a = 'B';

    printf("Decimal of a = %d \n", a);

    if ( a == 'b')
        printf("Value of a = a is (%c)\n", a);
    else
        printf("Value of a != a is (%c)\n", a);
    
    return 0;

}

/*
#include <stdio.h>
#include <stdbool.h>

int main(){
    bool t;
    t = true;
    
    if (t)
        printf("Verdadeiro %d\n, t)");
    else 
        prinf("False %d\n", t);
    
    return t;
    
}
*/