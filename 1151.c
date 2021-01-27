#include <stdio.h>
main () {
    int n, a, b, c, d=0;
    do {scanf("%i", &n);} while (n>0 && n<46);
    while (d<n) {
        a=0; b=0; c=0;
        if (a!=0 && b!=0) {c=a+b;}
        else {c=1;};
        a=b;
        b=c;
        printf("%i ", c);
        n++;
    }
    printf("%i\n", c);
    system("pause");
}