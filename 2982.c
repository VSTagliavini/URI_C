#include <stdio.h>

int main () {
    int n, val, bal=0;
    char ent;
    for (scanf("%d", &n); n>0; n--) {
        scanf(" %c %d", &ent, &val);
        if (ent=='V') bal += val;
        else if (ent=='G') bal -= val;
    }
    if (bal>=0) printf("A greve vai parar.\n");
    else printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    n = getch();
}