#include <stdio.h>

int main() {
    int nombre,  somme;

    printf("entrer un nombre : ");
    scanf("%d", &nombre);
    somme=nombre;
    while (nombre > 1) {
        somme =somme + (nombre-1) ;
        nombre = nombre - 1;
    }
    printf("la somme est %d",  somme);
    return 0;
}