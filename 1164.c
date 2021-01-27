#include <stdio.h>
main () {
    int rep, num, div, som;
    scanf("%i", &rep);
    while (rep>0) {
        scanf("%i", &num);
        som=0;
        div=1;
        while (div<num) {
            if (num%div==0) {som+=div;}
            div++;
        }
        if (som!=num) {printf("%i nao eh perfeito\n", num);}
        else {printf("%i eh perfeito\n", num);}
        rep--;
    }
    system("pause");
}