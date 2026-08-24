#include <stdio.h>

int main() {

    int altura = 0;
    int linha = 1;
    int coluna;

    printf("Digite a altura da arvore: ");
    scanf("%d", &altura);

    while (linha <= altura) {

        coluna = 1;

        while (coluna <= linha) {
            printf("*");
            coluna++;
        }

        printf("\n");
        linha++;
    }

    return 0;
}