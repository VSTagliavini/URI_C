#include <stdio.h>

int main () {
    int aux, aux1, aux2, aux3, n, q, e, a, b, mesa[1000];
    scanf("%d %d", &n, &q);
    for (aux=0; aux<=n; aux++) mesa[aux] = aux;
    for (aux3=0; aux3<q; aux3++) {
        scanf("%d", &e);
        if (e==1) {
            scanf("%d %d", &a, &b);
            aux = mesa[a];
            mesa[a] = mesa[b];
            mesa[b] = aux;
        }
        if (e==2) {
            scanf("%d", &a);
            aux = a; aux1=0; aux2=1;
            do {
                if (mesa[aux]==a) {printf("%d\n", aux1); aux2=0;}
                else {
                    aux1++;
                    aux = mesa[aux];
                }
            } while (aux2==1);
        }
    }
    system("pause");
}