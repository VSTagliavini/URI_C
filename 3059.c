#include <stdio.h>

int main () {
    int vet[1000], n, i, f, par=0, aux1, aux2;
    scanf("%d %d %d", &n, &i, &f);
    for (aux1=0; aux1<n; aux1++) scanf("%d", &vet[aux1]);
    for (aux1=0; aux1<n; aux1++) {
        for (aux2=aux1+1; aux2<n; aux2++) {
            if (vet[aux1]+vet[aux2]>=i && vet[aux1]+vet[aux2]<=f) par++;
        }
    }
    printf("%d\n", par);
    par = getch();
}