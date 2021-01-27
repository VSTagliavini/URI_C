#include <stdio.h>
#include <math.h>

int main () {
    int xf, yf, xi, yi, vi, r1, r2;
    double dist;
    while (scanf("%d %d %d %d %d %d %d", &xf, &yf, &xi, &yi, &vi, &r1, &r2)!=EOF) {
        dist = sqrt(pow(xf-xi, 2)+pow(yf-yi, 2));
        dist += vi*1.5;
        if (dist<=r1+r2) printf("Y\n");
        else printf("N\n");
    }
}