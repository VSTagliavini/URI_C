#include <stdio.h>
int cresc (int x, double y) {
    double pg;
    pg=x*(1+y/100);
    floor(pg);
    return pg;
}
main () {
    int rep, pa, pb, tem=0;
    double ga, gb;
    scanf("%i", &rep);
    while (rep>0) {
        scanf("%i %i %lf %lf", &pa, &pb, &ga, &gb);
        while (pa<=pb) {
            pa = cresc(pa, ga);
            pb = cresc(pb, gb);
            tem++;
        }
        rep--;
        if (tem>100) {printf("Mais de 1 seculo.\n"); break;}
        else {printf("%i anos.\n", tem);}
    }
    system("pause");
}