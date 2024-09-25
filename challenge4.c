#include <stdio.h>

int main() {
    int nombre, i;
    i=1;
    printf("entrer un nombre : ");
    scanf("%d", &nombre);
    while (nombre > 0) {
        printf("%d,",i);
        i=i+2;
        nombre = nombre - 1;
    }
    return 0;
}