#include <stdio.h>
main () {
    int a, b, c, d=0;
    long int fib [61];
    int valor [40];
    fib[0]=0; fib[1]=1;
    for(a=2;a<=60;a++) {fib[a]=fib[a-2]+fib[a-1];}

    //Tentar fazer o resto depois; lembrar que pode printar logo em seguida do scanf, isto é, não é necessário salvar os valores para printar tudo de uma vez no final do código

    system("pause");
}