#include <stdio.h>

int main () {
    int b1, b2, aux;
    char str[10];
    while (scanf(" %s", &str)!=EOF) {
        b1 = 0; b2 = 0;
        for (aux=1; aux<10; aux++) {
            b1+=(str[aux-1]-48)*aux;
            b2+=(str[aux-1]-48)*(10-aux);
        }
        b1 = b1%11; if (b1==10) b1 = 0;
        b2 = b2%11; if (b2==10) b2 = 0;
        printf("%c%c%c.%c%c%c.%c%c%c-%d%d\n", str[0], str[1], str[2], str[3], str[4], str[5], str[6], str[7], str[8], b1, b2);
    }
}