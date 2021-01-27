#include <stdio.h>

int main () {
    int Q[1000], E[1000], nq, ne, aux=0, aux2, est;
    for (scanf("%d %d", &nq, &ne); aux<ne; aux++) scanf("%d", &E[aux]);
    for (aux=0;aux<nq; aux++) {
        est=1;
        scanf("%d", &Q[aux]);
        for (aux2=0; aux2<ne; aux2++) if (Q[aux]==E[aux2]) est=0;
        for (aux2=0; aux2<aux; aux2++) if (Q[aux]==Q[aux2]) est=0;
        printf("%d\n", est);
    }
}