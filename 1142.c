#include <stdio.h>
main () {
    int s, p1=1, p2=2, p3=3, r=0;
    scanf("%i", &s);
    while (r<s) {
        printf("%i %i %i PUM\n", p1, p2, p3);
        p1 = p1+4;
        p2 = p2+4;
        p3 = p3+4;
        r++;
    }
    system("pause");
}