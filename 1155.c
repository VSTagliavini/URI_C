#include <stdio.h>
main () {
    float s=0, a, c;
    for (a=1;a<=100;a++) {
        c=1/a;
        s = s+c;
    }
    printf("%.2f", s);
    system("pause");
}