#include <stdio.h>

int main() {
    int nombre,  fact;
do
{
printf("entrer un nombre : ");
    scanf("%d", &nombre);
} while (nombre<0);
    fact=nombre;
    while (nombre > 1) {
        fact =fact * (nombre-1) ;
        nombre = nombre - 1;
    }
    printf("le factorielle est %d",  fact);
    return 0;
}