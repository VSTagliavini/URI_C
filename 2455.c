#include <stdio.h>

int main () {
    int p1, c1, p2, c2;
    scanf("%i %i %i %i", &p1, &c1, &p2, &c2);
    if (p1*c1>p2*c2) printf("-1\n");
    if (p1*c1==p2*c2) printf("0\n");
    if (p1*c1<p2*c2) printf("1\n");
}