#include <stdio.h>
#include <string.h>

int main () {
    int tes, aux, led;
    char num[102];
    scanf("%i", &tes);
    for (;tes>0;tes--) {
        fflush(stdin);
        led=0;
        scanf("%s", &num);
        for(aux=0; aux<strlen(num); aux++) {
            if (num[aux]=='1') {led+=2; continue;}
            if (num[aux]=='7') {led+=3; continue;}
            if (num[aux]=='4') {led+=4; continue;}
            if (num[aux]=='2'||num[aux]=='3'||num[aux]=='5') {led+=5; continue;}
            if (num[aux]=='6'||num[aux]=='9'||num[aux]=='0') {led+=6; continue;}
            else led+=7;
        }
        printf("%i leds\n", led);
    }
    system("pause");
}