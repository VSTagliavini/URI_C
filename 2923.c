#include <stdio.h>

int main () {
    int total, utili, perwar, percri;
    while (scanf("%i %i %i %i", &total, &utili, &perwar, &percri)!=EOF) {
    if (utili/(total*1.0)*100<perwar*1.0) printf("OK\n");
    if (utili/(total*1.0)*100>=perwar*1.0 && utili/(total*1.0)*100<percri*1.0) printf("warning\n");
    if (utili/(total*1.0)*100>=percri*1.0) printf("critical\n");
    }
    system("pause");
}