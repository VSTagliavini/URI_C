#include <stdio.h>
main () {
    int a, b, m2=0, m3=0, m4=0, m5=0;
    scanf("%i", &a);
    for (;a>0;a--) {
        scanf("%i", &b);
        if (b%2==0) {m2++;}
        if (b%3==0) {m3++;}
        if (b%4==0) {m4++;}
        if (b%5==0) {m5++;}
    }
    printf("%i Multiplo(s) de 2\n%i Multiplo(s) de 3\n%i Multiplo(s) de 4\n%i Multiplo(s) de 5\n", m2, m3, m4, m5);
system("pause");
}