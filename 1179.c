#include <stdio.h>
main () {
    int a, bp=0, bi=0, vp[5], vi[5], c, d;
    for (c=15;c>0;c--) {
        scanf("%i", &a);
        if (a%2==0) {vp[bp] = a; bp++;}
        else {vi[bi] = a; bi++;}
        if (bp==5) {for (d=0;d<5;d++) {printf("par[%i] = %i\n", d, vp[d]); vp[d] = 0;}; bp=0;}
        if (bi==5) {for (d=0;d<5;d++) {printf("impar[%i] = %i\n", d, vi[d]); vi[d] = 0;}; bi=0;}
    }
    for (bi=0;vi[bi]!=0;bi++) {
        printf("impar[%i] = %i\n", bi, vi[bi]);
    }
    for (bp=0;vp[bp]!=0;bp++) {
        printf("par[%i] = %i\n", bp, vp[bp]);
    }
    system("pause");
}