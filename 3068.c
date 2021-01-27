#include <stdio.h>

int main () {
    int x1=1, x2, xat, y1, y2, yat, n, nmet, tes=0;
    while (x1!=0 || y1!=0 || x2!=0 || y2!=0) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1!=0 || y1!=0 || x2!=0 || y2!=0) {
            tes++;
            nmet=0;
            for (scanf("%d", &n); n>0; n--) {
                scanf("%d %d", &xat, &yat);
                if (xat>=x1 && xat<=x2 && yat<=y1 && yat>=y2) nmet++;
            }
            printf("Teste %d\n%d\n", tes, nmet);
        }
    }
    system("pause");
}