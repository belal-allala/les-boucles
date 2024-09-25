#include <stdio.h>

int main() {
    int base, expo, pows, i;
    printf("entrer la base : ");
    scanf("%d", &base);
    printf("entrer exposant : ");
    pows=base;
    scanf("%d", &expo);
    for (i=0;i<expo;i++) {
        pows=pows*base;
    }
    printf("%d^%d=%d",base ,expo ,pows);
    return 0;
}