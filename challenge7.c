#include <stdio.h>

int main() {
    int nombre, chiffre, inverse = 0, i, len;

    printf("entrer un nombre entier : ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        chiffre = nombre % 10;
        inverse = inverse * 10 + chiffre; 
        nombre /= 10; 
    }
    printf("Le nombre inversé est : %d\n", inverse);

    return 0;
}