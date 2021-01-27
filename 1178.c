#include <stdio.h>
main () {
    int b;
    double a, v[100];
    scanf("%lf", &a);
    v[0] = a;
    for (b=1;b<100;b++) {
        v[b] = v[b-1]/2;
    }
    for (b=0;b<100;b++) {
    printf("N[%i] = %.4lf\n", b, v[b]);
    }
    system("pause");
}