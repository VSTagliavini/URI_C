#include <stdio.h>
main () {
    char o;
    int co, l, c;
    double s=0, m[12][12];
    scanf("%i %s", &co, &o);
    for (l=0;l<12;l++) {
        for (c=0;c<12;c++) {
            scanf("%lf", &m[l][c]);
            if (c==co) {
                s+=m[l][c];
            }
        }
    }
    if (o=="S") {printf("%.1lf\n", s);}
    if (o=="M") {s=s/12.0; printf("%.1lf\n", s);}
}