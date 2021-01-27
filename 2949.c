#include <stdio.h>
#include <string.h>

int main () {
    int n, a=0, e=0, h=0, m=0, x=0;
    char str[100], r;
    for (scanf("%d", &n); n>0; n--) {
        scanf(" %[^\n]s", &str);
        r = str[strlen(str)-1];
        switch (r) {
         case 'A': a++; break;
         case 'E': e++; break;
         case 'H': h++; break;
         case 'M': m++; break;
         case 'X': x++; break;
        }
    }
    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n", x, h, e, a, m);
    system("pause");
}