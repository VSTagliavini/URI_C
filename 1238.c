#include <stdio.h>
#include <string.h>
int main () {
    char str1[51], str2[51], strf[101], c;
    int a, b, c=0;
    scanf("%i", &a);
    for (; a>0; a--) {
        gets(str1);
        gets(str2);
        for (b=0; b<51; b++) {
            if (str1[b]!=' ') {strf[b] = str1[c]; b++;}
            if (str2[b]!=' ') {strf[b] = str2[c]; b++;}
        }
        printf("%c", strf);
    }
}