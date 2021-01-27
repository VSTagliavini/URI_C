#include <stdio.h>
#include <string.h>

int onetwo (char str[4]) {
    char gab1[4] = {'o', 'n', 'e', '\0'}, gab2[4] = {'t', 'w', 'o', '\0'};
    int pos, pont1=0, pont2=0;
    for (pos=0; pos<strlen(str); pos++) {
        if (str[pos]==gab1[pos]) pont1++;
        if (str[pos]==gab2[pos]) pont2++;
    }
    if (pont1>pont2 && pont1>1) return 1;
    if (pont2>pont1 && pont2>1) return 2;
}
int three (char str[6]) {
    char gab[6] = {'t', 'h', 'r', 'e', 'e', '\0'};
    int pos, pont=0;
    for (pos=0; pos<strlen(str); pos++) if (str[pos]==gab[pos]) pont++;
    if (pont>3) return 3;
}

int main () {
    int tes;
    char num[6];
    scanf("%i", &tes);
    for (;tes>0;tes--) {
        fflush(stdin);
        scanf("%s", &num);
        if (strlen(num)==3) printf("%i\n", onetwo(num));
        if (strlen(num)==5) printf("%i\n", three(num));
    }
    system("pause");
}