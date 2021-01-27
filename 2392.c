#include <stdio.h>

int main () {
    int m, n, np[101], p, d, e;
    for (m=0; m<101; m++) np[m] = 0;
    do {
        scanf("%i", &n);
    } while (n==0);
    do {
        scanf("%i", &m);
    } while(m>100);
    for (; m>0; m--) {
        scanf("%i %i", &p, &d);
        for (e=0; e<100; e++) {
            if (p+d*e<=100) np[p+d*e] = 1;
            if (p-d*e>=0) np[p-d*e] = 1;
        }
    }
    for (m=1; m<=n; m++) printf("%i\n", np[m]);
    system("pause");
}