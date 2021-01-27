#include <stdio.h>
#include <math.h>
main () {
    int a, b;
    int v [10];
    scanf("%i", &b);
    for (a=0;a<10;a++) {
        v[a] = b*pow(2, a);
    }
    for (a=0;a<10;a++) {
        printf("X[%i] = %i\n", a, v[a]);
    }
    system("pause");
}