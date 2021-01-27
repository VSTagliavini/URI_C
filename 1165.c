#include <stdio.h>
main () {
    int rep, num, div, pri;
    scanf("%i", &rep);
    while (rep>0) {
        scanf("%i", &num);
        for (div=2;div<num;div++) {
            if (num%div==0) {pri=0; break;}
            else {pri=1;}
        }
        if (pri==0) {printf("%i nao eh primo\n", num);}
        else {printf("%i eh primo\n", num);}
        rep--;
    }
    system("pause");
}