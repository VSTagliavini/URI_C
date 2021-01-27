#include <stdio.h>
#include <string.h>
int main () {
    int grasno=0, saida=0, a, b;
    char ent[8], caw[8] = "caw caw";
    do {
        gets(ent);
        if (strcmp(ent, caw) == 0) {printf("%i\n", saida); saida=0; grasno++;}
        else {
            if(ent[2] == '*') saida++;
            if(ent[1] == '*') saida+=2;
            if(ent[0] == '*') saida+=4;
        }
    }  while (grasno<3);
    system("pause");
}