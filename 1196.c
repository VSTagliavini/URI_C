#include <stdio.h>

int main() {
    char c, gab[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;ZXCVBNM,./";
    int aux;
    while(scanf("%c",&c) != EOF) {
        for(aux=0; aux<48; aux++) {
            if(c == 39) {printf(";"); break;}
            if(c == ' ') {printf(" "); break;}
            if(c == '\n') {printf("\n"); break;}
            if(c==gab[aux]) {printf("%c",gab[aux-1]); break;}
        }
    }
}