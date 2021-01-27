#include <stdio.h>
main () {
    char o;
    int l, c;
    double s=0, m[12][12];
    scanf("%c", &o);
    for (l=0;l<12;l++) {
        for (c=0;c<12;c++) {
            scanf("%lf", &m[l][c]);
            if (c>l && c<(11-l)) {
                s+=m[l][c];
            }
        }
    }
    if (o=='S') {printf("%.1lf\n", s);}
    else {if (o=='M') {printf("%.1lf\n", s/30.0);}}
}