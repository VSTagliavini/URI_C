#include <stdio.h>

#define max(a, b) (a > b ? a : b)

int main () {
    int n, num, pre[200000], aux, dist=0;
    scanf("%d", &n);
    for (num=0; num<n; num++) scanf("%d", &pre[num]);
    for (num=0; num<n; num++) {
        for (aux=num+1; aux<n; aux++) {
            dist = max(dist, pre[num]+(aux-num)+pre[aux]);
        }
    }
    printf("%d\n", dist);
    n = getch();
}