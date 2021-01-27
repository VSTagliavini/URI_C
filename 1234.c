#include <stdio.h>
#include <string.h>

int main () {
    int num,aux; 
    char str[51];
    while (gets(str)!=NULL) {
        aux =0;
        for (num=0; num<strlen(str); num++) {
            if(str[num]!=' ') aux++;
            if (aux%2==1 && str[num]>96 && str[num]<123) str[num]-=32;
            if (aux%2==0 && str[num]>64 && str[num]<91) str[num]+=32;
            
        }
        printf("%s\n", str);
    }
}