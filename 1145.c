#include <stdio.h>
main () {
    int e1, e2, r=1;
    scanf("%i %i", &e1, &e2);
    while (r<=e2) {
        while (r%e1!=0) {
            printf("%i ", r);
            r++;
        }
        printf("%i\n", r);
        r++;
    }
    system("pause");
}