#include <stdio.h>
#include <math.h>
main () {
    int a;
    float v [100];
    for (a=0;a<100;a++) {
        scanf("%f", &v[a]);
    }
    for (a=0;a<100;a++) {
        if (v[a]<=10) {printf("A[%i] = %.1f\n", a, v[a]);}
    }
    system("pause");
}