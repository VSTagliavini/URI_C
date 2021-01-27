#include <stdio.h>
main () {
    int a, b=1;
    scanf("%i", &a);
    while (b<=a) {
        if (a%b==0) {printf("%i\n", b);}
        b++;
    }
    system("pause");
}