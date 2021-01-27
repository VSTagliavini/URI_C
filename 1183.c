#include <stdio.h>
main () {
    char o;
    int l, c;
    double m[12][12], s=0;
    scanf(" %c", &o);
    for (l=0;l<12;l++) {
        for (c=0;c<12;c++) {
            scanf("%lf", &m[l][c]);
            if (c>l) {s+=m[l][c];}
        }
    }
    if (o=='S') {printf("%.1lf\n", s);}
    else {if (o=='M') {printf("%.1lf\n", s/66.0);}}
}