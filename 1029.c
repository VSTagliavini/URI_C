#include <stdio.h>

int cha;

int fibrec (int n) {
    cha++;
    if (n==1) return 1;
    else if (n==0) return 0; 
    else return fibrec(n-1)+fibrec(n-2);
}

int main () {
    int n, fib;
    for (scanf("%d", &n); n>0; n--) {
        scanf("%d", &fib);
        cha = 0;
        printf("fib(%d) = %d calls = %d\n", fib, --cha, fibrec(fib));
    }
}