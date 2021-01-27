#include <stdio.h>

int main () {
    int n, aux, vali;
    char placa[10];
    scanf("%d", &n);
    for (; n>0; n--) {
        vali=1;
        scanf("%s", &placa);
        for (aux=0; aux<3; aux++) if (placa[aux]<'A' || placa[aux]>'Z') vali=0;
        if (placa[3]!=45) vali=0;
        for(aux=4; aux<8; aux++) if (placa[aux]<'0' || placa[aux]>'9') vali=0;
        if (vali==0) printf("FAILURE\n");
        else {
            switch (placa[7]) {
                case '0': printf("FRIDAY\n"); break;
                case '1': printf("MONDAY\n"); break;
                case '2': printf("MONDAY\n"); break;
                case '3': printf("TUESDAY\n"); break;
                case '4': printf("TUESDAY\n"); break;
                case '5': printf("WEDNESDAY\n"); break;
                case '6': printf("WEDNESDAY\n"); break;
                case '7': printf("THURSDAY\n"); break;
                case '8': printf("THURSDAY\n"); break;
                case '9': printf("FRIDAY\n"); break;
            }
        }
    }
    system("pause");
}