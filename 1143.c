#include <stdio.h>
main () {
    int ent, rep=1;
    scanf("%i", &ent);
    while (rep<=ent) {
        printf("%i %i %i\n", rep, rep*rep, rep*rep*rep);
        rep++;
    }
    system("pause");
}