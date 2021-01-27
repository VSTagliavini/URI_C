#include <stdio.h>

int main ()
{
    double resposta=1;
    int n, entrada;
    char caractere;
    for (scanf("%d", &n); n>0; n--)
    {
        scanf("%d %c", &entrada, &caractere);
        if (caractere=='*')
        {
            resposta *= entrada;
            continue;
        }
        if (caractere=='/') resposta /= entrada;
    }
    printf("%.0lf\n", resposta);
    system("pause");
}