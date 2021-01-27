#include <stdio.h>

int main () {
    int b1, b2, aux;
    char str[15];
    while (scanf(" %s", &str)!=EOF) {
        b1 = 0; b2 = 0;
        for (aux=1; aux<4; aux++) {
            b1+=(str[aux-1]-48)*aux;
            b2+=(str[aux-1]-48)*(10-aux);
        }
        for (; aux<7; aux++) {
            b1+=(str[aux]-48)*aux;
            b2+=(str[aux]-48)*(10-aux);
        }
        for (; aux<10; aux++) {
            b1+=(str[aux+1]-48)*aux;
            b2+=(str[aux+1]-48)*(10-aux);
        }
        b1 = b1%11; if (b1==10) b1=0;
        b2 = b2%11; if (b2==10) b2=0;
        if (str[12]-48==b1 && str[13]-48==b2) printf("CPF valido\n");
        else printf("CPF invalido\n");
    }
}