#include <stdio.h>

int main () {
    int n, l1, l2, a1, a2;
    for (scanf("%d", &n); n>0; n--) {
        scanf("%d %d %d %d", &l1, &a1, &l2, &a2);
        if ((l1<l2 && a1<a2) || (l1<a2 && a1<l2)) printf("S\n");
        else printf("N\n");
    }
    n = getch();
}