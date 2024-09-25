#include <stdio.h>

int main() {
    int nombre, chiffre, i ;

    do {
    printf("entrer un nombre entier : ");
    scanf("%d", &nombre);
    } while(nombre<0);

    while (nombre != 0) {
        nombre /= 10; 
        chiffre +=1;
    }
    printf("nombre des chiffre est : %d\n", chiffre);

    return 0;
}
