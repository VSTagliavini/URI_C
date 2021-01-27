#include <stdio.h>

int main () {
    int n, vot, votc, ace=1;
    scanf("%d %d", &n, &votc); n--;
    for (; n>0; n--) {
        scanf("%d", &vot);
        if (votc<vot && ace==1) ace=0;
    }
    if (ace==1) printf("S\n");
    else printf("N\n");
    n = getch();
}