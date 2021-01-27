#include <stdio.h>
#include <string.h>
main () {
    int a, n1, n2;
    char jog1 [50], jog2 [50], esc1[10], esc2[10];
    scanf("%i", &a);
    for (;a>0;a--) {
        scanf("%s %s %s %s", jog1, esc1, jog2, esc2);
        scanf ("%i %i", &n1, &n2);
        if (esc1[0] == 'P') {
            if ((n1+n2)%2 == 0) printf("%s\n", jog1);
            else printf("%s\n", jog2);
        }
        else {
            if ((n1+n2)%2 == 0) printf("%s\n", jog2);
            else printf("%s\n", jog1);
        }
    }
    system("pause");
}