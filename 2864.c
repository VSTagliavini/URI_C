#include <stdio.h>
#include <math.h>

int main () {
    int n, a, b, c, xe, xd;
    double xm;
    for (scanf("%d", &n); n>0; n--) {
        scanf("%d %d %d", &a, &b, &c);
        xm = (double) -b/(2*a);
        printf("%.2lf\n", (double) a*xm*xm+b*xm+c);
    }
    xd = getch();
}