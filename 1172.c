#include <stdio.h>
main () {
    int a;
    int v [10];
    for(a=0;a<10;a++) {
        scanf("%i", &v[a]);
        if (v[a]<=0) {v[a]=1;}
    }
    for (a=0;a<10;a++) {
        printf("X[%i] = %i\n", a, v[a]);
    }
    system("pause");
}