#include <stdio.h>
main () {
    int ent, alc=0, gas=0, die=0, rep=1;
    while (rep==1) {
        scanf("%i", &ent);
        if (ent==1) {alc++; rep=1;}
        else {if (ent==2) {gas++; rep=1;}
        else {if (ent==3) {die++; rep=1;}
        else {if (ent==4) {rep=0;}
        else {if (ent<1 || ent>4) {rep=1;}}}}}
    }
    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", alc, gas, die);
    system("pause");
}