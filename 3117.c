#include <stdio.h>

int main () {
    int n, k, alu;
    scanf("%d %d", &n, &k);
    for (; n>0; n--) {
        scanf("%d", &alu);
        if (alu<1) k--;
    }
    if (k<1) printf("YES\n");
    else printf("NO\n");
    k = getch();
}