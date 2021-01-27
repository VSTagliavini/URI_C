#include <stdio.h>

int main () {
    int fig[300], n, uni, rep=0;
    for (n=0; n<300; n++) fig[n] = 0;
    for (scanf("%d", &n); n>0; n--) {
        scanf("%d", &uni);
        fig[--uni]++;
    }
    for (n=0, uni=0; n<300; n++) {
        if (fig[n]!=0) uni++;
        if (fig[n]>1) rep+=--fig[n];
    }
    printf("%d\n%d\n", uni, rep);
    n = getch();
}