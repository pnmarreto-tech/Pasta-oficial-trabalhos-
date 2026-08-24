#include <stdio.h>

int main() {

    int N;
    int maes = 0;

    do {

        scanf("%i", &N);

        if (N == 1) {
            maes++;
        }
        else if (N != 0) {
            printf("numero nao valido\n");
        }

    } while (maes < 8);

    printf("Parabens mae querida pelo seu dia, "
           "receba com alegria seu bolo de aniversario!!\n");

    return 0;
}