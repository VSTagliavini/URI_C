#include <stdio.h>
main () {
    int n, x, y, z;
    scanf("%i", &n);
    while (n>0) {
        z=0;
        scanf("%i %i", &x, &y);
        if (x%2==0) {x++;}
        while (y>0) {
            if (x%2==1) {z+=x; y--;}
            x++;
        }
        printf("%i\n", z);
        n--;
    }
    system("pause");
}