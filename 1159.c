#include <stdio.h>
main () {
    int a, b, c;
    while (1) {
        scanf("%i", &a);
        if (a==0) {break;}
        else {
            if (a%2==1) {a++;}
            for (b=5, c=0;b>0;b--) {
                if (a%2==0) {c+=a;}
                else {c=c+a+1;}
                a=a+2;
            }
            printf("%i\n", c);
        }
    }
    system("pause");
}