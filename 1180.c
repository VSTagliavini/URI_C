#include <stdio.h>
main () {
    int a, bp=0, c, v[1000];
    scanf("%i", &a);
    for (c=0;c<a;c++) {scanf("%i", &v[c]);}
    for (c=1;c<a;c++) {if (v[c]<v[bp]) {bp = c;}
    }
    printf("Menor valor: %i\nPosicao: %i\n", v[bp], bp);
    system("pause");
}