#include <stdio.h>
main () {
    int a, b;
    int v [20];
    for (a=0;a<20;a++) {
        scanf("%i", &v[a]);
    }
    for (a=0;a<10;a++) {
        b = v[a];
        v[a] = v[19-a];
        v[19-a] = b;
    }
    for (a=0;a<20;a++) {
        printf("N[%i] = %i\n", a, v[a]);
    }
    system("pause");
}