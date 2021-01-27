#include <stdio.h>
main () {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if (a+b+c>=24) {printf("%i\n", a+b+c-24);}
    else {if (a+b+c<0) {printf("%i\n", a+b+c+24);}
    else {printf("%i\n", a+b+c);}}
    system("pause");
}