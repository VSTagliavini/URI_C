#include <stdio.h>
main () {
    int e, r=1;
    scanf("%i", &e);
    while(r<=e) {
        printf("%i %i %i\n%i %i %i\n", r, r*r, r*r*r, r, (r*r)+1, (r*r*r)+1);
        r++;
    }
    system("pause");
}