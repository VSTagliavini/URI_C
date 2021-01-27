#include <stdio.h>
main () {
    int x, y=1;
    scanf("%i", &x);
    while (x>0) {
        y=y*x;
        x--;
    }
    printf("%i\n", y);
    system("pause");
}