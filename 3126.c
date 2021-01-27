#include <stdio.h>

int main () {
    int conv, comp=0, aux;
    for (scanf("%i", &conv);conv>0;conv--) {
        scanf("%i", &aux);
        if (aux==1) comp++;
    }
    printf("%i\n", comp);
    system("pause");
}