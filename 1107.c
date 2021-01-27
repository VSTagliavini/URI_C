#include <stdio.h>

int main () {
    int alt, com, nati, altatu1, altatu2, aux;
    while (1) {
        nati = 0;
        scanf("%d %d", &alt, &com);
        if (alt==0 && com==0) break;
        scanf("%d", &altatu1);
        com--;
        nati = alt-altatu1;
        for (; com>0; com--) {
            scanf("%d", &altatu2);
            if (altatu2<altatu1) nati += altatu1-altatu2;
            altatu1 = altatu2;
        }
        printf("%d\n", nati);
    }
}