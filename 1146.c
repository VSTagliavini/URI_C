#include <stdio.h>
main () {
    int e=1, r;
    while (e!=0) {
        r=1;
        scanf("%i", &e);
        while (r%e!=0) {
            printf("%i ", r);
            r++;
        }
        printf("%i\n", r);
        r++;
    }
    system("pause");
}