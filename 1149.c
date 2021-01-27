#include <stdio.h>
main () {
    int a, n=0, s=0, i=0;
    scanf("%i", &a);
    while (n<=0) {
        scanf("%i", &n);
    }
    while (i<=n-1) {
        s = s+a+i;
        i++;
    }
    printf("%i\n", s);
    system("pause");
}