#include <stdio.h>

int mdc (int num1, int num2)
{
    int aux;
    if (num2>num1)
    {
        aux = num2;
        num2 = num1;
        num1 = aux;
    }
    while (num1%num2!=0)
    {
        aux = num1%num2;
        num1 = num2;
        num2 = aux;
    }
    return num2;
}

int main ()
{
    int num, car1, car2;
    for (scanf("%d", &num); num>0; num--)
    {
        scanf("%d %d", &car1, &car2);
        printf("%d\n", mdc(car1, car2));
    }
}