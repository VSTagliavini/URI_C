#include <stdio.h>
#include <string.h>
int main () {
    int n, auxint, tamtex;
    char texto[1000], auxch;
    scanf("%i", &n);
    getchar();
    for (; n>0; n--) {
        gets(texto);
        tamtex = strlen(texto);
        for (auxint=0; auxint<tamtex; auxint++) {
            if (texto[auxint]>64 && texto[auxint]<91) texto[auxint]+=3;
            if (texto[auxint]>96 && texto[auxint]<123) texto[auxint]+=3;
        }
        for (auxint=0; auxint<tamtex/2; auxint++) {
            auxch = texto[auxint];
            texto[auxint] = texto[tamtex-auxint-1];
            texto[tamtex-auxint-1] = auxch;
        }
        for (auxint=tamtex/2;auxint<tamtex;auxint++) {
            texto[auxint]-=1;
        }
        printf("%s\n", texto);
    }
    system("pause");
}