#include <stdio.h>

int main () {
    int n, cai[250], aux, pos=1;
    scanf("%d", &n);
    for (aux=0;aux<n;aux++) scanf("%d", &cai[aux]);
    if (cai[0]>8) pos=0;
    for (aux=1; aux<n; aux++) if (cai[aux]-cai[aux-1]>8) pos=0;
    if (pos==0) printf("N\n");
    else printf("S\n");
    system("pause");
}