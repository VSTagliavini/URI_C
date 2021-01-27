#include <stdio.h>

int main () {
    int aux1, aux2, n, nm, nl, cama[100][100], cale[100][100];
    while (scanf("%d", &n)!=EOF) {
        scanf("%d %d", &nm, &nl);
        for (aux1=0; aux1<nm; aux1++) for (aux2=0; aux2<n; aux2++) scanf("%i", &cama[aux1][aux2]);
        for (aux1=0; aux1<nl; aux1++) for (aux2=0; aux2<n; aux2++) scanf("%i", &cale[aux1][aux2]);
        scanf("%d %d %d", &nm, &nl, &n);
        if (cama[nm][n]>cale[nl][n]) printf("Marcos\n");
        if (cama[nm][n]<cale[nl][n]) printf("Leonardo\n");
        if (cama[nm][n]==cale[nl][n]) printf("Empate\n");
    }
}