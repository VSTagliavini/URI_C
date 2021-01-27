#include <stdio.h>

int main () {
    int n, k, j, auxli, auxco, lif, cof, lij, coj, dist;
    char mapa;
    for (scanf("%d", &n); n>0; n--) {
        scanf("%d %d, &k, &j");
        for (auxli=0; auxli<j; auxli++) {
            for (auxco=0; auxco<j; auxco++) {
                scanf(" %c", &mapa);
                if (mapa==70) {lif = auxli; cof = auxco; printf("%d %d", lif, cof);}
                else if (mapa==74) {lij = auxli; coj = auxco; printf("%d %d", lij, coj);}
            }
        }
        system("pause");
    }
}