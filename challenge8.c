#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, term, i;

    printf("entrer le nombre de termes de la suite de fibonacci : ");
    scanf("%d", &n);

    printf("Suite de fibonacci:");
    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        term = t1 + t2;
        t1 = t2;
        t2 = term;
    }

    return 0;
}