#include <stdio.h>
main () {
    int v [1000];
    int a, b=0, c=0;
    scanf("%i", &a);
    for (b=0;b<1000;b++) {
        if (c<a) {
            v [b] = c;
            c++;
        }
        else {c = 0; v[b] = c; c++;}
    }
    for (b=0;b<1000;b++) {
        printf("N[%i] = %i\n", b, v[b]);
    }
    system("pause");
}