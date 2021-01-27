#include <stdio.h>

int main () {
    int ncas, nent, auxcas, auxent, cas[45000], ent[45000], temp=0, min, max;
    scanf("%d %d", &ncas, &nent);
    for (auxcas=0; auxcas<ncas; auxcas++) scanf("%d", &cas[auxcas]);
    for (auxent=0; auxent<nent; auxent++) scanf("%d", &ent[auxent]);
    auxent = 0;
    do {
        min = 0; max = ncas;
        do {
            auxcas = (min+max)/2;
            if (cas[auxcas]<ent[auxent]) min = auxcas;
            else if (cas[auxcas]>ent[auxent]) max = auxcas;
            printf("%d ", auxcas);
        } while (cas[auxcas]!=ent[auxent]);
        auxent++;
        printf("\n");
    } while (auxent<ent);
    printf("%d\n", temp);
    temp = getch();
}