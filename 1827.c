#include <stdio.h>
int main () {
    int or, li, co, matriz[101][101];
    while (scanf("%d",&or)!=EOF) {
    for (li=0; li<or; li++) {
        for (co=0; co<or; co++) {
            matriz[li][co] = 0;
            if (li==co) matriz[li][co]=2;
            if (li+co+1==or) matriz[li][co]=3;
            if (li>=or/3 && li<=or-1-(or/3) && co>=or/3 && co<=or-1-(or/3)) matriz[li][co] = 1;
            if (li==or/2 && co==or/2) matriz[li][co] = 4;
            printf("%i", matriz[li][co]);  
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    }
}