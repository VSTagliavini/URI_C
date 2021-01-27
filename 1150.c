#include <stdio.h>
main () {
    int w, x, y=0, z;
    scanf("%i", &x);
    do {scanf("%i", &z);} while(z<=x);
    for (w=1;y<=z;x++) {
        y = y+x;
        w++;
        x++;
    }
    printf("%i\n", w);
    system("pause");
}