#include <stdio.h>
main () {
    int a, b=0;
    float c=0, d;
    do {
        scanf("%f", &a);
        if (a>=0) {b=b+a; c++;}
    } while (a>=0);
    d=b/c;
    printf("%.2f\n", d);
    system("pause");
}